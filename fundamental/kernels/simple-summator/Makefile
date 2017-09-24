include ../../settings.makefile

simple-summator-kernel: kernel.cu
	$(CC) -x cu -dc --gpu-architecture sm_60 -I. kernel.cu -o kernel.o

clean:
	rm kernel.o
