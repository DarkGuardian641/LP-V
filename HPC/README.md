# High Performance Computing (HPC) Lab Assignments

This directory contains C++ implementations for various High Performance Computing (HPC) assignments, focusing on parallel programming using OpenMP and CUDA.

## Prerequisites Installation

### Windows (MinGW)

To compile C++ programs with OpenMP support on Windows, you need MinGW and the `pthreads` library installed.

1. **Install MinGW**: Download and install MinGW from [mingw.org](http://www.mingw.org/) or using MSYS2. Ensure you install the `gcc` and `g++` base packages.
2. **Add to PATH**: Add `C:\MinGW\bin` (or your respective installation path) to your system's Environment Variables `PATH`.
3. **Install pthreads (for OpenMP)**:
   MinGW requires the POSIX threads library for OpenMP to work. Open your terminal and run:
   ```powershell
   mingw-get install pthreads
   ```
   *If you face a `cannot find -lpthread` error during compilation, running the command above fixes it.*

### Linux (Ubuntu/Debian)

Most Linux distributions come with GCC and `pthreads` pre-installed or easily available via the package manager.

1. **Install GCC and OpenMP**: Open your terminal and run:
   ```bash
   sudo apt update
   sudo apt install build-essential libomp-dev
   ```
   *(The `build-essential` package includes `g++`, and `libomp-dev` includes the OpenMP libraries).*

---

## Assignments List

1. **Assignment 1: Parallel Search Algorithms**
   - `Assignment1_BFS.cpp`: Parallel Breadth-First Search (BFS) using OpenMP.
   - `Assignment1_DFS.cpp`: Parallel Depth-First Search (DFS) using OpenMP.

2. **Assignment 2: Parallel Sorting Algorithms**
   - `Assignment2_sorting.cpp`: Parallel Bubble Sort and Merge Sort using OpenMP. Compares performance between sequential and parallel executions.

3. **Assignment 3: Parallel Reduction**
   - `Assignment3.cpp`: Implementation of Min, Max, Sum, and Average operations using Parallel Reduction in OpenMP.

4. **Assignment 4: GPU Programming with CUDA**
   - `Assignment4a.cpp`: Addition of two large vectors using CUDA.
   - `Assignment4b.cpp`: Matrix Multiplication using CUDA.

5. **Assignment 5: HPC in AI/ML Domain**
   - `Assignment5.cpp`: Implementation of Parallel Linear Regression (Gradient Descent) using OpenMP.

---

## How to Run the Code in the Terminal

### 1. Assignment 1: Parallel BFS

**Linux / macOS:**

```bash
g++ -fopenmp Assignment1_BFS.cpp -o bfs
./bfs
```

**Windows:**

```powershell
g++ -fopenmp Assignment1_BFS.cpp -o bfs.exe
.\bfs.exe
```

### 2. Assignment 1: Parallel DFS

**Linux / macOS:**

```bash
g++ -fopenmp Assignment1_DFS.cpp -o dfs
./dfs
```

**Windows:**

```powershell
g++ -fopenmp Assignment1_DFS.cpp -o dfs.exe
.\dfs.exe
```

### 3. Assignment 2: Parallel Sorting

**Linux / macOS:**

```bash
g++ -fopenmp Assignment2_sorting.cpp -o sorting
./sorting
```

**Windows:**

```powershell
g++ -fopenmp Assignment2_sorting.cpp -o sorting.exe
.\sorting.exe
```

### 4. Assignment 3: Parallel Reduction

**Linux / macOS:**

```bash
g++ -fopenmp Assignment3.cpp -o reduction
./reduction
```

**Windows:**

```powershell
g++ -fopenmp Assignment3.cpp -o reduction.exe
.\reduction.exe
```

### 5. Assignment 4a: CUDA Vector Addition

_(Note: Requires NVIDIA CUDA Toolkit. We use `-x cu` since the file has a `.cpp` extension instead of `.cu`)_

**Linux / macOS:**

```bash
nvcc -x cu Assignment4a.cpp -o vector_add
./vector_add
```

**Windows:**

```powershell
nvcc -x cu Assignment4a.cpp -o vector_add.exe
.\vector_add.exe
```

### 6. Assignment 4b: CUDA Matrix Multiplication

**Linux / macOS:**

```bash
nvcc -x cu Assignment4b.cpp -o matmul
./matmul
```

**Windows:**

```powershell
nvcc -x cu Assignment4b.cpp -o matmul.exe
.\matmul.exe
```

### 7. Assignment 5: HPC in AI/ML Domain (Parallel Linear Regression)

**Linux / macOS:**

```bash
g++ -fopenmp Assignment5.cpp -o aiml
./aiml
```

**Windows:**

```powershell
g++ -fopenmp Assignment5.cpp -o aiml.exe
.\aiml.exe
```
