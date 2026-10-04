# LAB REPORT

## OpenMP Parallel Maximum/Minimum Search

### Parallel and Distributed Computing

---

**Experiment:** Parallel Maximum and Minimum Search using OpenMP

**Programming Language:** C

**Parallel Programming Model:** OpenMP

**Project Type:** Group Project

---
## 1. Abstract

This experiment implements a parallel approach for finding the maximum and minimum values in a dataset using OpenMP. The performance of the parallel implementation is compared with the corresponding sequential implementation.

OpenMP is used to distribute the computation across multiple threads, allowing different portions of the dataset to be processed concurrently. The execution time is measured for different input sizes and thread configurations to study the effect of parallelization on performance.

The experimental results are presented using result tables and performance graphs. Speedup and efficiency are also analyzed to evaluate the effectiveness of the OpenMP implementation.

## 2. Introduction

Maximum and minimum search is a fundamental operation in data processing and is commonly used to identify the largest and smallest elements in a dataset. In a sequential implementation, the elements are processed one after another, which can become time-consuming when the size of the input data increases.

Parallel computing provides a way to reduce execution time by dividing a computational task among multiple processing threads. OpenMP is an API that supports shared-memory parallel programming in C, C++, and Fortran. It provides compiler directives, library routines, and environment variables for creating and managing parallel execution.

In this experiment, OpenMP is used to parallelize the maximum and minimum search operation. The dataset is divided among multiple threads, and each thread processes its assigned portion of the data. The partial results are then combined to obtain the final maximum and minimum values.

The performance of the sequential and parallel implementations is evaluated using execution time, speedup, and efficiency for different input sizes and numbers of threads.

## 3. Problem Statement

Finding the maximum and minimum values in a large dataset using a sequential approach requires processing the elements one by one. As the input size increases, the execution time also increases.

The objective of this experiment is to develop a parallel maximum/minimum search algorithm using OpenMP and compare its performance with the sequential implementation.

The experiment investigates whether dividing the workload among multiple threads can reduce execution time and improve computational performance for different input sizes.

## 4. Objectives

The main objectives of this experiment are:

1. To implement maximum and minimum search using a sequential approach.
2. To implement maximum and minimum search using OpenMP parallel programming.
3. To understand the use of OpenMP directives and parallel regions.
4. To execute the program using different numbers of threads.
5. To measure and compare the execution time of sequential and parallel implementations.
6. To calculate the speedup achieved through parallel execution.
7. To analyze the efficiency of the parallel implementation.
8. To study the effect of input size and thread count on parallel performance.

## 5. Software and Hardware Requirements

### 5.1 Software Requirements

| Software / Tool | Purpose |
|---|---|
| C Programming Language | Implementation of the sequential and parallel programs |
| OpenMP | Parallel programming and thread management |
| GCC Compiler | Compilation of the C programs |
| macOS / Linux | Development and execution environment |
| GitHub | Project documentation and version control |

### 5.2 Hardware Requirements

| Component | Requirement |
|---|---|
| Processor | Multi-core processor |
| RAM | Sufficient memory for the selected input size |
| Storage | Sufficient space for source code and result files |
| System | Computer capable of supporting OpenMP |

### 5.3 Development Environment

The programs were developed and executed in a shared-memory computing environment using a C compiler with OpenMP support. Multiple threads were used to perform the maximum and minimum search in parallel.

## 6. Technologies Used

The following technologies and tools were used to implement and evaluate the experiment:

| Technology / Tool | Description |
|---|---|
| **C** | Used to implement the sequential and parallel maximum/minimum search programs. |
| **OpenMP** | Used to parallelize the search operation using multiple threads. |
| **GCC** | Used to compile the C programs with OpenMP support. |
| **macOS / Linux** | Used as the execution environment. |
| **Git & GitHub** | Used for project version control, documentation, and collaboration. |

### OpenMP

OpenMP (Open Multi-Processing) is an API that supports shared-memory parallel programming. It allows a program to create multiple threads and distribute computational work among them.

In this experiment, OpenMP is used to divide the input data among multiple threads so that maximum and minimum values can be searched concurrently.

## 7. Methodology

The experiment consists of two implementations:

1. Sequential Maximum/Minimum Search
2. Parallel Maximum/Minimum Search using OpenMP

Both implementations perform the same task of finding the maximum and minimum values from the input dataset. Their execution times are measured and compared to evaluate the benefits of parallelization.

### 7.1 Sequential Approach

In the sequential implementation, the input elements are processed one after another using a single thread.

The algorithm starts by initializing the maximum and minimum values using the first element of the dataset. Each remaining element is then compared with the current maximum and minimum values.

If an element is greater than the current maximum, the maximum is updated. Similarly, if an element is smaller than the current minimum, the minimum is updated.

The sequential approach is straightforward but requires all elements to be processed by a single thread.

### 7.2 Parallel Approach using OpenMP

In the parallel implementation, OpenMP is used to divide the search operation among multiple threads.

The input dataset is divided into portions, and each thread processes its assigned portion independently. Each thread identifies the local maximum and local minimum of its portion.

The local results from all threads are then combined to determine the final maximum and minimum values.

The number of threads can be varied to study how parallelism affects execution time and overall performance.

### 7.3 Performance Measurement

The execution time of both implementations is measured using a high-resolution timing function. The parallel implementation is tested with different numbers of threads and input sizes.

The measured execution times are used to calculate speedup and efficiency and to generate performance comparison graphs.

## 8. Algorithms

### 8.1 Sequential Maximum/Minimum Algorithm

**Input:** An array of `n` elements.

**Output:** Maximum and minimum values in the array.

**Steps:**

1. Read the number of elements `n`.
2. Read the elements of the array.
3. Initialize `max` and `min` with the first element.
4. Traverse the remaining elements sequentially.
5. If the current element is greater than `max`, update `max`.
6. If the current element is smaller than `min`, update `min`.
7. Continue until all elements have been processed.
8. Display the final maximum and minimum values.

### 8.2 OpenMP Parallel Maximum/Minimum Algorithm

**Input:** An array of `n` elements and a specified number of threads.

**Output:** Maximum and minimum values in the array.

**Steps:**

1. Read the number of elements `n`.
2. Read the elements of the array.
3. Initialize the maximum and minimum values.
4. Create multiple OpenMP threads.
5. Divide the array elements among the available threads.
6. Each thread searches its assigned portion of the array.
7. Each thread determines its local maximum and local minimum.
8. Combine the local results from all threads using OpenMP synchronization/reduction.
9. Determine the final maximum and minimum values.
10. Display the final results.
11. Measure the parallel execution time for performance analysis.

## 9. OpenMP Directives and Functions Used

The following OpenMP directives and functions are used in the parallel implementation.

### 9.1 `#include <omp.h>`

The OpenMP header file is included to provide access to OpenMP functions and features.

```c
#include <omp.h>double start = omp_get_wtime();

/* Program execution */

double end = omp_get_wtime();
double execution_time = end - start;

### 10.1 Sequential Implementation

The sequential program processes the complete dataset using a single thread. Each element is compared with the current maximum and minimum values.

The source code is available in:

`sequential.c`

### 10.2 Parallel Implementation

The parallel program uses OpenMP to divide the workload among multiple threads. Each thread processes a portion of the dataset and contributes to the final maximum and minimum calculation.

The source code is available in:

`parallel.c`

### 10.3 Compilation

The programs can be compiled using GCC with OpenMP support.

#### Sequential Program

```bash
gcc sequential.c -o sequential

gcc -fopenmp parallel.c -o parallel
./sequential
./parallel

### Then commit it

Click:

**Commit changes → Commit changes**

✅ **Step 12 complete.**

**Important:** From the next step onward, we'll start adding your **actual experiment results, result tables, graphs, and screenshots**. I don't want to invent any numbers, so we'll use the results you already generated.

Say **"next"** and we'll do **Step 13 — Experimental Setup**.

## 11. Experimental Setup

The experiment was performed to compare the performance of sequential and OpenMP-based parallel maximum/minimum search.

The following parameters were considered during the experiment:

| Parameter | Description |
|---|---|
| Input Data | Array of numerical values |
| Sequential Execution | Single-thread execution |
| Parallel Execution | Multiple-thread execution using OpenMP |
| Input Sizes | Different input sizes were tested |
| Thread Counts | Different numbers of OpenMP threads were tested |
| Performance Metric | Execution time |
| Additional Metrics | Speedup and efficiency |

### Experimental Procedure

1. Execute the sequential implementation for the selected input sizes.
2. Record the execution time.
3. Execute the OpenMP implementation using the selected number of threads.
4. Record the parallel execution time.
5. Verify that both implementations produce the same maximum and minimum values.
6. Repeat the experiment for different input sizes and thread counts.
7. Compare the execution times.
8. Calculate speedup and efficiency.
9. Represent the results using tables and graphs.
### 12.1 Performance Results

The performance of the OpenMP implementation was evaluated using 1, 2, 4, and 8 threads. The execution time, speedup, and efficiency were recorded for each thread configuration.

| Number of Threads | Execution Time (s) | Speedup | Efficiency (%) |
|---:|---:|---:|---:|
| 1 | 0.031602 | 0.846 | 84.60 |
| 2 | 0.016249 | 1.645 | 82.25 |
| 4 | 0.008296 | 3.222 | 80.55 |
| 8 | 0.005973 | 4.476 | 55.95 |

### 12.2 Results Analysis

The results show that execution time decreases as the number of OpenMP threads increases. The execution time decreases from **0.031602 seconds with 1 thread** to **0.005973 seconds with 8 threads**.

The highest measured speedup is **4.476 with 8 threads**. The corresponding efficiency is **55.95%**.

The results demonstrate that OpenMP parallelization can significantly reduce execution time for the maximum/minimum search operation. However, the efficiency decreases as the number of threads increases, which can be attributed to parallelization overhead, thread management, synchronization, and the available processing resources.
