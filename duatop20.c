#include <stdio.h>

void separateEvenOdd(int A[], int n, int even[], int odd[], int *sizeEven, int *sizeOdd) {
    *sizeEven = 0;
    *sizeOdd = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            even[*sizeEven] = A[i];
            (*sizeEven)++;
        } else {
            odd[*sizeOdd] = A[i];
            (*sizeOdd)++;
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
    int n;
    scanf("%d", &n);
    if (n <= 1 || n >= 100) {
        return 1;
    }
    int A[100], even[100], odd[100];
    int sizeEven, sizeOdd;
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if (A[i] > 1000) {
            printf("Invalid input for element %d. Exiting the program.\n", i + 1);
            return 1;
        }
    }
    separateEvenOdd(A, n, even, odd, &sizeEven, &sizeOdd);
    printArray(even, sizeEven);
    printArray(odd, sizeOdd);
    return 0;
}

