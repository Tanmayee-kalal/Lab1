#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 10000000;

    int *data = malloc(n * sizeof(int));

    if (data == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    srand(42);

    // Generate the dataset
    for (int i = 0; i < n; i++) {
        data[i] = rand() % 1000000;
    }

    int max = data[0];
    int min = data[0];

    // Start timing
    clock_t start = clock();

    // Sequential maximum and minimum search
    for (int i = 1; i < n; i++) {

        if (data[i] > max) {
            max = data[i];
        }

        if (data[i] < min) {
            min = data[i];
        }
    }

    // Stop timing
    clock_t end = clock();

    double time_taken =
        (double)(end - start) / CLOCKS_PER_SEC;

    printf("Sequential Maximum = %d\n", max);
    printf("Sequential Minimum = %d\n", min);
    printf("Execution Time = %.6f seconds\n", time_taken);

    free(data);

    return 0;
}