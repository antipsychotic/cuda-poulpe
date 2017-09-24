simple-summator-kernel: kernel.cu
	/usr/local/cuda-8.0/bin/nvcc -x cu -dc --gpu-architecture sm_60 -I. kernel.cu -o kernel.o

clean:
	rm kernel.o
