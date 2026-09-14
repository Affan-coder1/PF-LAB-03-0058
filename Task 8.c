#include <stdio.h>
int main(){
	int a,b,remainder,quotient;
	printf("Enter number 1 : ");
	scanf("%d",&a);
	printf("Enter number 2 : ");
	scanf("%d",&b);
	if (b==0){
		printf("Division Not Possible!");
	}
	else{
		quotient = a / b;
		remainder = a % b;
		printf("Quotient is : %d\n",quotient);
		printf("Remainder is : %d",remainder);
	}
	return 0;
}