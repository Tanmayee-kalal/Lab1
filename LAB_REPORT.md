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
