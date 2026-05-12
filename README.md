# LP-V: Laboratory Practicals Repository

Welcome to the central repository for the LP-V practicals. This repository is divided into two major domains:

1. **Deep Learning Laboratory (DL)**: Focuses on modern neural networks, predictive modeling, and deep learning architectures using TensorFlow/Keras.
2. **High Performance Computing (HPC)**: Focuses on parallel programming, optimization, and GPU acceleration using OpenMP and CUDA in C++.

---

## 🧠 Deep Learning Laboratory (`/DL`)

The Deep Learning section contains both Python scripts (`.py`) and Jupyter Notebooks (`.ipynb`) for various predictive and classification tasks.

### Key Experiments:

- **Experiment 1**: Boston Housing Price Prediction (Deep Neural Network for Regression)
- **Experiment 2**: IMDB Movie Review Sentiment Classification (DNN with Embedding, Conv1D, LSTM)
- **Experiment 3**: Fashion MNIST Classification (Convolutional Neural Network)
- **Experiment 4**: Google Stock Price Prediction (Stacked LSTM for Time Series)

### Getting Started (DL)

To run the Deep Learning assignments, set up your Python environment:

```bash
cd DL
python -m venv venv
.\venv\Scripts\activate      # Windows
# source venv/bin/activate  # Linux/Mac
pip install -r requirements.txt
jupyter notebook
```

_For detailed information on datasets and models, see the [DL/README.md](DL/README.md)._

---

## ⚡ High Performance Computing (`/HPC`)

The HPC section contains C++ implementations demonstrating parallel computing paradigms.

### Key Assignments:

- **Assignment 1**: Parallel Search Algorithms (Breadth-First Search & Depth-First Search using OpenMP)
- **Assignment 2**: Parallel Sorting Algorithms (Bubble Sort & Merge Sort using OpenMP)
- **Assignment 3**: Parallel Reduction (Min, Max, Sum, Average using OpenMP)
- **Assignment 4**: GPU Programming with CUDA (Vector Addition & Matrix Multiplication)
- **Assignment 5**: HPC in AI/ML (Parallel Linear Regression using OpenMP)

### Getting Started (HPC)

To compile and run the HPC assignments, you need a C++ compiler with OpenMP support (like GCC) or the NVIDIA CUDA Toolkit (`nvcc`) for GPU tasks.

**Example Compilation (OpenMP on Windows/Linux):**

```bash
cd HPC
g++ -fopenmp Assignment1_BFS.cpp -o bfs
./bfs
```

**Example Compilation (CUDA):**

```bash
nvcc -x cu Assignment4a.cpp -o vector_add
./vector_add
```

_For detailed setup instructions (including installing MinGW, pthreads, and CUDA), see the [HPC/README.md](HPC/README.md)._
