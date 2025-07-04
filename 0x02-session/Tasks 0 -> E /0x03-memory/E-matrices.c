#include <stdio.h>
#include <stdlib.h>

int **allocate_matrix(int rows, int cols)
{
    int **matrix = malloc(rows * sizeof(int *));
    if (!matrix) return NULL;

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = malloc(cols * sizeof(int));
        if (!matrix[i])
        {
            for (int j = 0; j < i; j++)
                free(matrix[j]);
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}

void free_matrix(int **matrix, int rows)
{
    for (int i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
}

void fill_matrix(int **matrix, int rows, int cols, char name)
{
    printf("Enter values for Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}

void save_result_to_file(int **matrix, int rows, int cols, const char *filename)
{
    FILE *file = fopen(filename, "w");
    if (!file) return;

    fprintf(file, "Resultant Matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            fprintf(file, "%d\t", matrix[i][j]);
        fprintf(file, "\n");
    }
    fclose(file);
}

int main(void)
{
    int m, n, j, k;

    printf("Enter rows (m) and cols (n) for Matrix A: ");
    scanf("%d %d", &m, &n);

    int **A = allocate_matrix(m, n);
    if (!A)
    {
        printf("Memory allocation failed for Matrix A.\n");
        return 1;
    }

    fill_matrix(A, m, n, 'A');

    printf("Enter rows (j) and cols (k) for Matrix B: ");
    scanf("%d %d", &j, &k);

    int **B = allocate_matrix(j, k);
    if (!B)
    {
        printf("Memory allocation failed for Matrix B.\n");
        free_matrix(A, m);
        return 1;
    }

    fill_matrix(B, j, k, 'B');

    if (n != j)
    {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        free_matrix(A, m);
        free_matrix(B, j);
        return 1;
    }

    int **C = allocate_matrix(m, k);
    if (!C)
    {
        printf("Memory allocation failed for result matrix.\n");
        free_matrix(A, m);
        free_matrix(B, j);
        return 1;
    }

    for (int i = 0; i < m; i++)
        for (int l = 0; l < k; l++)
        {
            C[i][l] = 0;
            for (int p = 0; p < n; p++)
                C[i][l] += A[i][p] * B[p][l];
        }

    save_result_to_file(C, m, k, "matrix_result.txt");
    printf("Matrix multiplication result saved to matrix_result.txt\n");

    free_matrix(A, m);
    free_matrix(B, j);
    free_matrix(C, m);

    return 0;
}
