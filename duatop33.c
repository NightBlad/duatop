#include <stdio.h>
#include <string.h>
int main() {
	char arr[100];
	fgets(arr,100,stdin);
  int n = strlen(arr);
  for(int i =0;i<n;i++){
    printf("%c",arr[i]);
  }
    return 0;
}
