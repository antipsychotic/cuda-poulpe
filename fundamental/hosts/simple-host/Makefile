include ../../settings.makefile

simple-host: host.cpp external-simple-summator-kernel.h
	$(CC) -x cu host.cpp -dc --gpu-architecture sm_60 -I. -o host.o

clean:
	rm host.o
