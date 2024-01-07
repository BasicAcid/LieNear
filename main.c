#include <stdio.h>

// This is just a Dynamic array.
struct Vector
{
    double *elements;
    size_t length;
};

struct Matrix
{
    double **elements;
    size_t rows;
    size_t cols;
};

struct Vector create_vector(size_t size)
{
    struct DynamicArray arr;
    arr.data = (double *)malloc(size * sizeof(Vector));
    arr.size = size;
    return arr;
}

// TODO: Implement create_matrix.

int
main(void)
{


    return 0;
}
