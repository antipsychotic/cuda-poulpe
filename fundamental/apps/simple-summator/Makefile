CC=/usr/local/cuda-8.0/bin/nvcc

simple-summator-app: simple-summator-kernel simple-summator-host
	$(CC) --gpu-architecture sm_60 \
		../../kernels/simple-summator/kernel.o \
		../../hosts/simple-host/host.o \
		-o simple-summator-app
	chmod +x ./simple-summator-app

simple-summator-kernel:
	cd ../../kernels/simple-summator && make

simple-summator-host: simple-summator-kernel
	cd ../../hosts/simple-host && make

clean:
	cd ../../kernels/simple-summator && make clean
	cd ../../hosts/simple-host && make clean
