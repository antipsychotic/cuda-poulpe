simple-host: host.cpp external-simple-summator-kernel.h
	/usr/local/cuda-8.0/bin/nvcc -x cu host.cpp -dc --gpu-architecture sm_60 -I. -o host.o

clean:
	rm host.o
