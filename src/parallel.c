#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int n = 10000000;

    int *data = malloc(n * sizeof(int));

    if (data == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    srand(42);

    // Generate the same dataset as the sequential program
    for (int i = 0; i < n; i++) {
        data[i] = rand() % 1000000;
    }

    int global_max = data[0];
    int global_min = data[0];

    // Start timing
    double start = omp_get_wtime();

    #pragma omp parallel
    {
        int local_max = data[0];
        int local_min = data[0];

        // Divide the dataset between threads
        #pragma omp for
        for (int i = 0; i < n; i++) {

            if (data[i] > local_max) {
                local_max = data[i];
            }

            if (data[i] < local_min) {
                local_min = data[i];
            }
        }

        // Combine results from all threads
        #pragma omp critical
        {
            if (local_max > global_max) {
                global_max = local_max;
            }

            if (local_min < global_min) {
                global_min = local_min;
            }
        }
    }

    // Stop timing
    double end = omp_get_wtime();

    printf("Parallel Maximum = %d\n", global_max);
    printf("Parallel Minimum = %d\n", global_min);
    printf("Execution Time = %.6f seconds\n",
           end - start);

    free(data);

    return 0;
}