#include<stdio.h>

int main(){
	int arr[10000][10];
  int n,m;
  scanf("%d %d",&n,&m);
  if (n < 2 || m>=10) {
    return 1;
  }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            scanf("%d", &arr[j][i]);
            if (arr[j][i] > 100) {
                printf("Invalid input for element %d in test case %d. Exiting the program.\n", i + 1, j + 1);
                return 1;
            }
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
          printf("%d ", arr[i][j]);
        }  printf("\n");
    }
	return 0;
}
