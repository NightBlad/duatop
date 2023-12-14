#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b && a > 0) {
        int count = 0; 
        int *arr = NULL; 

        for (int i = a; i <= b; i++) {
            double squareRoot = sqrt((double)i);

            if (squareRoot == (int)squareRoot) {
                count++;
                arr = (int *)realloc(arr, count * sizeof(int));
                arr[count - 1] = i;
            }
        }
        printf("%d\n", count);
        for (int i = 0; i < count; i++) {
            printf("%d\n", arr[i]);
        }
        free(arr);
    }

    return 0;
}
