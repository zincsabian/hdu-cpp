#pragma once
class Matrix{
private:
    int n;
    int **arr;
public:
    Matrix(int*, int);
    Matrix(const Matrix&);
    ~Matrix();
    Matrix &operator=(const Matrix&);
    void Add(const Matrix&);
    void Print();
};