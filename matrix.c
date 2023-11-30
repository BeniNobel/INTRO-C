// Program to perform matrix addition for matrices A and B, storing the result in matrix C.

#include <stdio.h>

int main() {
    // Declare matrices A, B, and C
    int A[50][50];
    int B[50][50];
    int C[50][50];
    
    // Declare variables for matrix dimensions
    int N, M;
    int I, J;

    // Get dimensions of the matrices
    printf("Number of rows (max. 50): ");
    scanf("%d", &N);
    printf("Number of columns (max. 50): ");
    scanf("%d", &M);

    // Input elements for matrix A
    printf("*** Matrix A ***\n");
    for (I = 0; I < N; I++) {
        for (J = 0; J < M; J++) {
            printf("Element[%d][%d]: ", I, J);
            scanf("%d", &A[I][J]);
        }
    }

    // Input elements for matrix B
    printf("*** Matrix B ***\n");
    for (I = 0; I < N; I++) {
        for (J = 0; J < M; J++) {
            printf("Element[%d][%d]: ", I, J);
            scanf("%d", &B[I][J]);
        }
    }

    // Display matrix A
    printf("Given Matrix A:\n");
    for (I = 0; I < N; I++) {
        for (J = 0; J < M; J++)
            printf("%7d", A[I][J]);
        printf("\n");
    }

    // Display matrix B
    printf("Given Matrix B:\n");
    for (I = 0; I < N; I++) {
        for (J = 0; J < M; J++)
            printf("%7d", B[I][J]);
        printf("\n");
    }

    // Perform matrix addition and store the result in matrix C
    for (I = 0; I < N; I++)
        for (J = 0; J < M; J++)
            C[I][J] = A[I][J] + B[I][J];

    // Display the result matrix C
    printf("Resultant Matrix C:\n");
    for (I = 0; I < N; I++) {
        for (J = 0; J < M; J++)
            printf("%7d", C[I][J]);
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
