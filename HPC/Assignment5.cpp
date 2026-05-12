// Implement HPC in AIML Domain: Parallel Linear Regression (Gradient Descent) using OpenMP

#include <iostream>
#include <vector>
#include <omp.h>
#include <chrono>

using namespace std;

int main() {
    int N = 10000000; // Number of data points
    vector<double> X(N);
    vector<double> Y(N);

    // Initialize dataset representing the line y = 2x + 3
    cout << "Initializing dataset with " << N << " points..." << endl;
    for (int i = 0; i < N; ++i) {
        X[i] = (double)i / N;
        Y[i] = 2.0 * X[i] + 3.0; // True parameters: m = 2.0, c = 3.0
    }

    double m = 0.0; // Initial weight
    double c = 0.0; // Initial bias
    double learning_rate = 0.1;
    int epochs = 100;

    cout << "Starting Parallel Gradient Descent for Linear Regression..." << endl;
    auto start_time = chrono::high_resolution_clock::now();

    for (int epoch = 0; epoch < epochs; ++epoch) {
        double sum_dm = 0.0; // Gradient for m
        double sum_dc = 0.0; // Gradient for c

        // Parallel reduction for calculating the gradients
        // This is where HPC meets AI/ML: distributing the error calculation across multiple threads!
        #pragma omp parallel for reduction(+:sum_dm, sum_dc)
        for (int i = 0; i < N; ++i) {
            double y_pred = m * X[i] + c;
            double error = y_pred - Y[i];
            
            sum_dm += error * X[i]; // Partial derivative wrt m
            sum_dc += error;        // Partial derivative wrt c
        }

        // Update parameters using calculated gradients
        m -= learning_rate * (2.0 / N) * sum_dm;
        c -= learning_rate * (2.0 / N) * sum_dc;
    }

    auto end_time = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> duration = end_time - start_time;

    cout << "---------------------------------" << endl;
    cout << "Trained Parameters:" << endl;
    cout << "m (weight) = " << m << " (Expected ~2.0)" << endl;
    cout << "c (bias)   = " << c << " (Expected ~3.0)" << endl;
    cout << "---------------------------------" << endl;
    cout << "Parallel Training Time: " << duration.count() << " ms" << endl;

    return 0;
}