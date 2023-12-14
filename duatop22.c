#include <stdio.h>

void separateEvenOdd(int A[], int n, int even[], int *sizeEven) {
    *sizeEven = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            even[*sizeEven] = A[i];
            (*sizeEven)++;
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int num_tests;
    scanf("%d", &num_tests);
    for (int i = 0; i < num_tests; i++) {
      int n;
      scanf("%d", &n);
      if (n <= 1 || n >= 100) {
          return 1;
      }
      int A[100], even[100];
      int sizeEven;
      for (int i = 0; i < n; i++) {
          scanf("%d", &A[i]);
          if (A[i] > 1000) {
              printf("Invalid input for element %d. Exiting the program.\n", i + 1);
              return 1;
          }
      }
      separateEvenOdd(A, n, even, &sizeEven);
      printArray(even, sizeEven);
    }
    return 0;
}
