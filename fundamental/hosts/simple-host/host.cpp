#include "external-simple-summator-kernel.h"
#include <stdio.h>

int main(void) {
	int input[3] = {0, 1, 2};
	printf("Input = (%d, %d, %d)\n", input[0], input[1], input[2]);

	int summand[3] = {2, 1, 0};
	printf("Summand = (%d, %d, %d)\n", summand[0], summand[1], summand[2]);

	int memblock_size = sizeof(int) * 3;

	int *device_input, *device_summand, *device_result;

	cudaMalloc((void**)&device_input, memblock_size);
	cudaMemcpy(device_input, input, memblock_size, cudaMemcpyHostToDevice);

	cudaMalloc((void**)&device_summand, memblock_size);
	cudaMemcpy(device_summand, summand, memblock_size, cudaMemcpyHostToDevice);

	cudaMalloc((void**)&device_result, memblock_size);

	simple_summator_device<<<1,1>>>(
		device_input,
		device_summand,
		device_result
	);

	int result[3] = {0, 0, 0};

	cudaMemcpy(result, device_result, memblock_size, cudaMemcpyDeviceToHost);

	printf("Result = (%d, %d, %d)\n", result[0], result[1], result[2]);

	cudaFree(device_input);
	cudaFree(device_summand);
	cudaFree(device_result);

	printf("Execution finished\n");

	return 0;
}
