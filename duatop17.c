#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int sum1 = sumOfDigits(a);
	int sum2 = sumOfDigits(b);
	if(sum1<sum2) printf("%d %d",a,b);
	else if(sum1 == sum2) printf("%d %d",a,b);
	else printf("%d %d",b,a);
	return 0;
}
