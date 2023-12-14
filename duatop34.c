#include <stdio.h>
int main() {
  int x;
  scanf("%d",&x);
  long int multi = 1;
  while(x>0){
    multi *= x%10;
    x /=10;
  }
  printf("%ld",multi);
    return 0;
}
