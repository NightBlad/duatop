#include<stdio.h>

int main(){
	int arr[50][50];
  int n,m;
  scanf("%d %d",&m,&n);
  if (n < 2||m<2) {
    return 1;
  }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[j][i]);
        }
    }
    int a,b,temp;
    scanf("%d %d",&a,&b);
    for(int j =0;j<n;j++){
        temp = arr[a-1][j];
        arr[a-1][j] = arr[b-1][j];
        arr[b-1][j] = temp;
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
          printf("%d ", arr[j][i]);
        }  printf("\n");
    }
	return 0;
}
