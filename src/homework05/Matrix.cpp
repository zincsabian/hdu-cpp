#include "Matrix.h"
Matrix::Matrix(int *a, int _n): n(_n) {
    arr = new int *[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int [n];
        for(int j = 0; j < n; j++)
            arr[i][j] = a[i * n + j];
    }
}
Matrix::Matrix(const Matrix& b) : n(b.n) {
    arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            arr[i][j] = b.arr[i][j];
        }
    }
}
Matrix::~Matrix() {
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

Matrix &Matrix::operator=(const Matrix &other) {
    if (this != &other) {
        for (int i = 0; i < n; i++) {
            delete[] arr[i];
        }
        delete[] arr;
        n = other.n;
        arr = new int *[n];
        for (int i = 0; i < n; i++) {
            arr[i] = new int[n];
            for (int j = 0; j < n; j++) {
                arr[i][j] = other.arr[i][j];
            }
        }
    }
    return *this;
}