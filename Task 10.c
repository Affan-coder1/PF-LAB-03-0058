#include <stdio.h>
int main(){
	float num;
	printf("Enter a floating point number : ");
	scanf("%f",&num);
	printf("Number with 1 decimal place : %.1f\n",num);
	printf("Number with 3 decimal place : %.3f",num);
	return 0;
}
