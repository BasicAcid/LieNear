#include <stdio.h>
#include <stdlib.h>

// TODO: add allocation checks.

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

struct Vector
create_vector(size_t length)
{
    struct Vector vec;
    vec.elements = malloc(length * sizeof(vec));
    vec.length = length;
    return vec;
}

struct Matrix
create_matrix(size_t n_rows, size_t n_cols)
{
    struct Matrix matrix;
    matrix.elements = malloc(n_rows * sizeof(matrix));

    for(size_t i = 0; i < n_rows; ++i)
    {
        matrix.elements[i] = malloc(n_cols * sizeof(matrix));
    }

    matrix.rows = n_rows;
    matrix.cols = n_cols;

    return matrix;
}

struct Matrix
add_matrix(struct Matrix mat_1, struct Matrix mat_2)
{
    // TODO
    // Add size verification.
    // Create binary external function that does this.

    struct Matrix matrix = create_matrix(mat_1.rows, mat_1.cols);

    for(size_t i = 0; i < mat_1.rows; i++)
    {
        for(size_t j = 0; j < mat_1.cols; j++)
        {
            matrix.elements[i][j] = mat_1.elements[i][j] + mat_2.elements[i][j];
        }
    }
    return matrix;
}

struct Matrix
hadamard_product(struct Matrix mat_1, struct Matrix mat_2)
{
    struct Matrix matrix = create_matrix(mat_1.rows, mat_1.cols);

    for(size_t i = 0; i < mat_1.rows; i++)
    {
        for(size_t j = 0; j < mat_1.cols; j++)
        {
            matrix.elements[i][j] = mat_1.elements[i][j] * mat_2.elements[i][j];
        }
    }
    return matrix;
}

void
print_vector(struct Vector vec)
{
    for(size_t i = 0; i < vec.length; i++)
        printf("%f\n", vec.elements[i]);
}

void
print_matrix(struct Matrix matrix)
{
    for(size_t i = 0; i < matrix.rows; i++)
    {
        for(size_t j = 0; j < matrix.cols; j++)
        {
            printf("%f\t", matrix.elements[i][j]);
        }
        printf("\n");
    }

}

void
free_vector(struct Vector *vec)
{
    free(vec->elements);
    vec->length = 0;
}

void
free_matrix(struct Matrix *matrix)
{
    free(matrix->elements);
    matrix->rows = 0;
    matrix->cols = 0;
}

int
main(void)
{
    struct Matrix test_matrix = create_matrix(5,5);

    print_matrix(test_matrix);

    return 0;
}
