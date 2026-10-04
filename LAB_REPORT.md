# LAB REPORT

# OpenMP Parallel Maximum/Minimum Search

## Parallel and Distributed Computing

---

## 1. Abstract

This experiment implements and evaluates a parallel maximum and minimum search algorithm using OpenMP. The objective is to compare the performance of parallel execution using different numbers of threads and analyze the effect of parallelization on execution time.

The implementation uses C and OpenMP to divide the search operation among multiple threads. Each thread processes a portion of the input data and contributes to the computation of the maximum and minimum values.

The performance is evaluated using execution time, speedup, and efficiency. Experiments are performed using 1, 2, 4, and 8 OpenMP threads. The results are presented using tables and performance graphs.

---

## 2. Introduction

Finding the maximum and minimum values from a dataset is a fundamental operation in computer science and data processing. In a sequential implementation, the elements are processed one after another using a single thread.

For large datasets, sequential processing can require significant execution time. Parallel computing provides a method for improving performance by dividing a computational task among multiple processing threads.

OpenMP (Open Multi-Processing) is an API for shared-memory parallel programming. It provides compiler directives and library functions that allow a program to create and manage multiple threads.

In this experiment, OpenMP is used to parallelize the maximum and minimum search operation. The input data is divided among multiple threads, and the partial results are combined to obtain the final maximum and minimum values.

---

## 3. Problem Statement

The sequential maximum/minimum search processes the input data one element at a time. As the size of the dataset increases, the execution time can also increase.

The problem addressed in this experiment is to implement a parallel maximum/minimum search using OpenMP and evaluate whether distributing the computation across multiple threads can reduce execution time.

The sequential and parallel approaches are analyzed using execution time, speedup, and efficiency.

---

## 4. Objectives

The main objectives of this experiment are:

1. To implement maximum and minimum search using C.
2. To understand the sequential approach for maximum/minimum search.
3. To implement a parallel maximum/minimum search using OpenMP.
4. To execute the parallel program using different numbers of threads.
5. To measure the execution time for different thread configurations.
6. To compare the performance of different thread counts.
7. To calculate and analyze speedup.
8. To calculate and analyze parallel efficiency.
9. To visualize the performance using graphs.
10. To study the effect of parallelization on computational performance.

---

## 5. Software and Hardware Requirements

### 5.1 Software Requirements

| Software / Tool | Purpose |
|---|---|
| C | Program implementation |
| OpenMP | Parallel programming |
| GCC | Compilation |
| macOS / Linux | Execution environment |
| Git | Version control |
| GitHub | Project collaboration and documentation |

### 5.2 Hardware Requirements

| Component | Requirement |
|---|---|
| Processor | Multi-core processor |
| RAM | Sufficient memory for the input dataset |
| Storage | Sufficient storage for source code and results |
| Operating System | macOS / Linux |

---

## 6. Technologies Used

### C Programming Language

C is used to implement the sequential and parallel maximum/minimum search programs.

### OpenMP

OpenMP is used to parallelize the computation and execute different portions of the workload using multiple threads.

### GCC

GCC is used to compile the C programs with OpenMP support.

### GitHub

GitHub is used for source-code management, documentation, result storage, and group collaboration.

---

## 7. Methodology

The experiment consists of a maximum/minimum search implementation using OpenMP.

The general workflow is:

1. Prepare the input dataset.
2. Initialize the maximum and minimum values.
3. Execute the search operation.
4. Measure execution time.
5. Repeat the experiment using different numbers of OpenMP threads.
6. Record execution time for each configuration.
7. Calculate speedup and efficiency.
8. Compare the performance using tables and graphs.

### 7.1 Parallel Processing Approach

The input data is divided among multiple threads. Each thread processes its assigned portion of the dataset and determines the maximum and minimum values for that portion.

The partial results are then combined to obtain the final maximum and minimum values.

This approach allows multiple elements of the dataset to be processed concurrently.

---

## 8. Algorithm

### 8.1 Maximum/Minimum Search Algorithm

**Input:** Array containing numerical values.

**Output:** Maximum and minimum values.

1. Read the input data.
2. Initialize the maximum and minimum values.
3. Divide the input workload among the available OpenMP threads.
4. Each thread processes its assigned portion of the data.
5. Each thread determines its local maximum and minimum.
6. Combine the local maximum and minimum values.
7. Determine the final maximum and minimum values.
8. Display the results.
9. Measure the execution time.

---

## 9. OpenMP Directives and Functions

### 9.1 OpenMP Header

The OpenMP header is included using:

```c
#include <omp.h>
### 9.5 Execution Time Measurement

The OpenMP timing function `omp_get_wtime()` can be used to measure execution time.

Example:

```c
double start = omp_get_wtime();

/* Program execution */

double end = omp_get_wtime();

double execution_time = end - start;
