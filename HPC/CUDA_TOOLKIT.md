# HPC-Practicals

#### CUDA Installation
- 1. Install CUDA Toolkit:

  Download and install the appropriate CUDA Toolkit for your system from the NVIDIA website: https://developer.nvidia.com/cuda-toolkit
  Follow the installation instructions provided by NVIDIA.
- 2. Configure CUDA Paths:

  - After installation, you'll need to set the environment variables for CUDA include and library paths. These paths typically point to the directories containing cuda.h and other CUDA libraries.

  - The specific steps for setting environment variables depend on your operating system. Here are some general guidelines:

    ##### Windows:
  - Right-click on "This PC" or "My Computer" and select "Properties".
  - Go to "Advanced system settings" -> "Environment Variables".
  - Under "System variables", find the "Path" variable and edit it.
  - Add the paths to your CUDA include directory (e.g., C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v11.7\include) and the CUDA library directory (e.g., C:\Program Files\NVIDIA GPU       Computing Toolkit\CUDA\v11.7\libnvdiacompute). Separate each path with a semicolon (;).

- 3. Verify Installation:

  - Once you've installed and configured CUDA, try compiling a simple CUDA program to verify if it works. You can use the provided code snippets as a starting point.

### **2. OpenMP Setup (for CPU Parallelism)**

  - OpenMP is a compiler feature, not a separate installation. To enable it, you need to use a C++ compiler that supports OpenMP and pass the appropriate flag during compilation.

  - **GCC/G++ (Linux/macOS/WSL):**

    - Use the `-fopenmp` flag when compiling:
      ```bash
      g++ -fopenmp your_program.cpp -o your_program
      ```

  - **Visual Studio (Windows):**

    - In Visual Studio, go to **Project Properties** -> **C/C++** -> **Language**.
    - Set **Open MP Support** to **Yes (/openmp)**.

  - **Clang:**

    - Use the `-fopenmp` flag:
      ```bash
      clang++ -fopenmp your_program.cpp -o your_program
      ```