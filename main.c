#include <stdio.h>
#include <stdlib.h>

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

struct Vector create_vector(size_t length)
{
    struct Vector vec;
    vec.elements = (double *)malloc(length * sizeof(vec));
    vec.length = length;
    return vec;
}

void
print_vector(struct Vector vec)
{
    for(size_t i = 0; i < vec.length; i++)
        printf("%f\n", vec.elements[i]);
}

void
free_vector(struct Vector *vec)
{
    free(vec->elements);
    vec->length = 0;
}

// TODO: Implement create_matrix.

int
main(void)
{


    return 0;
}
