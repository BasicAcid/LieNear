#include <stdio.h>

// This is just a Dynamic array.
struct Vector
{
    double *elements;
    unsigned int length;
};

struct Matrix
{
    double **elements;
    unsigned int rows;
    unsigned int cols;
};

struct Vector create_vector(size_t size)
{
    struct DynamicArray arr;
    arr.data = (double *)malloc(size * sizeof(double));
    arr.size = size;
    return arr;
}


// TODO: Implement create_matrix.

int
main(void)
{


    return 0;
}
