extern __device__ void simple_summator_kernel(int *a, int *b, int *c) {
	for (int i = 0; i < 3; i++) {
		c[i] = a[i] + b[i];
	}
}
