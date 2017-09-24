#pragma once

extern __device__ void simple_summator_kernel(int*, int*, int*);

__global__ void simple_summator_device(
    int *input,
    int *summand,
    int *result
) {
    simple_summator_kernel(input, summand, result);
}
