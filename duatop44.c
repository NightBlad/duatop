#include <stdio.h>

void multiplyMatrixByTranspose(int n, int m, int matrix[n][m], int result[n][n]) {
    int transpose_matrix[m][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transpose_matrix[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < m; ++k) {
                result[i][j] += matrix[i][k] * transpose_matrix[k][j];
            }
        }
    }
}

int main() {
    int num_tests, n, m;
    scanf("%d", &num_tests);

    for (int test = 1; test <= num_tests; ++test) {
        scanf("%d %d", &n, &m);
        int matrix_A[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                scanf("%d", &matrix_A[i][j]);
            }
        }
        int result_matrix[n][n];
        multiplyMatrixByTranspose(n, m, matrix_A, result_matrix);
        printf("Test %d:\n", test);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%d ", result_matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

