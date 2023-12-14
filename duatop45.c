#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int h1 = 0,h2 = n-1,c1 = 0,c2 = n-1;
  int arr[n][n];
  int count =0;
  while(h1<=h2&&c1<=c2){
    for(int i = c1;i<=c2;i++){
      count++;
      arr[h1][i] = count;
    }h1++;
    for(int i = h1;i<=h2;i++){
      count++;
      arr[i][c2] = count;
    }c2--;
    if(c1<=c2){
      for(int i = c2;i>=c1;i--){
        count++;
        arr[h2][i] = count;
      }h2--;
    }
    if(h1<=h2){
      for(int i = h2;i>=h1;i--){
        count++;
        arr[i][c1]= count;
      }c1++;
    }
  }
  for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
      printf("%d ",arr[i][j]);
    }printf("\n");
  }
  return 0;
}
