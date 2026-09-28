# Lab1
Course Title: Parallel and Grid Computing (PGC)

Experiment Title: Performance Analysis of Matrix Multiplication using Sequential, OpenMP.

Abstract Abstract This experiment compares sequential and OpenMP implementations of 4000 × 4000 matrix multiplication. The sequential program took 348.02 seconds, while the OpenMP implementation using 8 threads reduced the execution time to 132.46 seconds, achieving a 2.63 × speedup. Both implementations produced the correct result, C [ 0 ] [ 0 ] = 4000.00 . The results demonstrate the performance improvement achieved through shared-memory parallelism using OpenMP.

Experimental Objectives To implement 4000 × 4000 matrix multiplication using Sequential C and OpenMP. To verify the correctness of the result by confirming C [ 0 ] [ 0 ] = 4000.00 . To measure the execution time of both implementations and calculate the speedup of OpenMP over the sequential program. To compare the performance of single-threaded execution with 8-thread OpenMP parallel execution. To analyze the performance improvement achieved through shared-memory parallelism using OpenMP.

3.Environment

•⁠ ⁠Operating System: Ubuntu on WSL2 •⁠ ⁠Programming Language: C •⁠ ⁠Compiler: GCC •⁠ ⁠Matrix Size: 4000 × 4000

Result

•⁠ ⁠Matrix Size: 4000 × 4000 •⁠ ⁠Verification: C[0][0] = 4000.00

The sequential execution time is used as the baseline for calculating the speedup of parallel implementations.
