# Lab1
Course Title: Parallel and Grid Computing (PGC)

Experiment Title: Performance Analysis of Matrix Multiplication using Sequential, OpenMP.

1. Abstract Abstract This experiment compares sequential and OpenMP implementations of 4000 × 4000 matrix multiplication. The sequential program took 348.02 seconds, while the OpenMP implementation using 8 threads reduced the execution time to 132.46 seconds, achieving a 2.63 × speedup. Both implementations produced the correct result, C [ 0 ] [ 0 ] = 4000.00 . The results demonstrate the performance improvement achieved through shared-memory parallelism using OpenMP.

2. Experimental Objectives To implement 4000 × 4000 matrix multiplication using Sequential C and OpenMP. To verify the correctness of the result by confirming C [ 0 ] [ 0 ] = 4000.00 . To measure the execution time of both implementations and calculate the speedup of OpenMP over the sequential program. To compare the performance of single-threaded execution with 8-thread OpenMP parallel execution. To analyze the performance improvement achieved through shared-memory parallelism using OpenMP.

3.Environment

•⁠ ⁠Operating System: Ubuntu on WSL2 •⁠ ⁠Programming Language: C •⁠ ⁠Compiler: GCC •⁠ ⁠Matrix Size: 4000 × 4000

Result

•⁠ ⁠Matrix Size: 4000 × 4000 •⁠ ⁠Verification: C[0][0] = 4000.00

The sequential execution time is used as the baseline for calculating the speedup of parallel implementations.
## 3. System Architecture & Source Code Matrix

| Paradigm | Source File | Compute Units | Compiler / Toolchain |
|---|---|---|---|
| Sequential | `matrix_sequential.c` | 1 CPU Core | GCC `-O2` |
| OpenMP | `matrix_openmp.c` | 8 CPU Threads | GCC `-O2 -fopenmp` |

## 4. Empirical Data & Benchmarking Results

### 4.1 Performance Summary Table

| Computing Model | Resources | Execution Time (s) | Speedup vs Sequential | Verification C[0][0] |
|---|---|---:|---:|---:|
| Sequential Baseline | 1 CPU Core | 348.023990 | 1.00× | 4000.00 |
| OpenMP Shared Memory | 8 Threads | 132.457362 | 2.63× | 4000.00 |

### 4.2 Experimental Configuration

| Parameter | Details |
|---|---|
| Course | Parallel and Grid Computing (PGC) |
| Experiment | Performance Analysis of Matrix Multiplication |
| Matrix Size | 4000 × 4000 |
| Programming Language | C |
| Operating System | Ubuntu on WSL2 |
| Compiler | GCC |
| Sequential Resources | 1 CPU Core |
| OpenMP Resources | 8 CPU Threads |
| Correctness Check | C[0][0] = 4000.00 |
| Baseline | Sequential Execution |

### 4.3 Result Comparison

| Metric | Sequential | OpenMP |
|---|---:|---:|
| Matrix Size | 4000 × 4000 | 4000 × 4000 |
| Threads | 1 | 8 |
| Execution Time | 348.02 s | 132.46 s |
| Speedup | 1.00× | 2.63× |
| Verification | 4000.00 | 4000.00 |

### Result

| Result | Observation |
|---|---|
| Correctness | Both implementations produced **C[0][0] = 4000.00** |
| Execution Time | OpenMP reduced execution time from **348.02 s to 132.46 s** |
| Speedup | OpenMP achieved a **2.63× speedup** over sequential execution |
| Parallelism | Performance improved using **8-thread shared-memory parallelism** |
| Baseline | Sequential execution was used as the baseline for speedup calculation |

## 5. Performance Visualizations

### Figure 1: Sequential Execution

<img src="https://raw.githubusercontent.com/Tanmayee-kalal/Lab1/main/sequential.jpeg" alt="Sequential Execution" width="800">

**Figure 1:** Sequential matrix multiplication execution output.

### Figure 2: OpenMP Execution

<img src="https://raw.githubusercontent.com/Tanmayee-kalal/Lab1/main/OpenMP.jpeg" alt="OpenMP Execution" width="800">

**Figure 2:** OpenMP matrix multiplication execution using 8 threads.

## 3. MPI

MPI uses distributed-memory parallelism. The matrix computation is divided between multiple MPI processes.

### Compilation

```bash
mpicc -O2 src/mpi/matrix_mpi.c -o mpi_matrix_mul
```

### Execution

```bash
mpirun -np 4 ./mpi_matrix_mul
```

For a configured host file:

```bash
mpirun --hostfile hostfile -np 4 ./mpi_matrix_mul
```

### MPI Communication

#### Figure 3: MPI Ping Communication

![Figure 3: MPI Ping Communication](mpi_ping.png)

#### Figure 4: MPI Send/Receive Execution

![Figure 4: MPI Send/Receive Execution](mpi_send_recv.png)

### Results

#### Figure 5: MPI Matrix Multiplication Result

![Figure 5: MPI Matrix Multiplication Result](mpi_result.png)
