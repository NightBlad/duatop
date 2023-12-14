#include <stdio.h>

int main() {
  int a,i,j;
  int arr[10][10];
  scanf("%d",&a);
  for(i = 0;i<a;i++){
    for(j = 0;j<=i;j++){
      if(j==0||j==i){
        arr[i][j]=1;
      }
      else {
        arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
      }
      
    }
  }
  for(i=0;i<a;i++){
    printf("\n");
    for(j=0;j<=i;j++){
      printf("%d ",arr[i][j]);
    }
  }
  return 0;
}
