#define cudaCalloc(A, SIZE) \
    do { \
        cudaError_t __cudaCalloc_err = cudaMalloc(A, SIZE); \
        if (__cudaCalloc_err == cudaSuccess) cudaMemset(*A, 0, SIZE); \
    } while (0)

void gpu_mm_dense(struct Matrix *h_A, struct Matrix *h_B, struct Matrix *h_C, const int m, const int n, const int k);
void cpu_mm(struct Matrix *h_A, struct Matrix *h_B, struct Matrix *h_C, int m, int n, int k);
void gpu_mm_sparse(struct Matrix *h_A, struct Matrix *h_B, struct Matrix *h_C, const int m, const int n, const int k);
