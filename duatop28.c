#include <stdio.h>

int main() {
    int num_test;
    scanf("%d", &num_test);

    int arr[1000][10];
    int n, m;

    for (int a = 0; a < num_test; a++) {
        scanf("%d %d", &n, &m);
		  if (n < 2 || m>=10) {
		    return 1;
		  }
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                scanf("%d", &arr[j][i]);
                if (arr[j][i] > 1000) {
                    printf("Invalid input for element %d in test case %d. Exiting the program.\n", i + 1, j + 1);
                    return 1;
                }
            }
        }
        printf("Test %d:\n",a+1);
        for (int j = 1; j < n; j++) {
            for (int i = 1; i < m; i++) {
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
    }

    return 0;
}
