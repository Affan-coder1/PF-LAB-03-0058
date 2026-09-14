#include <stdio.h>
int main(){
	char city[50], country[50];
	long population;
	float area;
	char grade;
	printf("Enter your City : ");
	scanf("%s",&city);
	printf("Enter your Country : ");
	scanf("%s",&country);
	printf("Enter Population : ");
	scanf("%ld",&population);
	printf("Enter Area : ");
	scanf(" %f",&area);
	printf("Enter Grade : ");
	scanf(" %c",&grade);
	printf("You live in %s, %s\n",city,country);
	printf("Population : %.2ld\n",population);
	printf("Area : %.2f\n",area);
	printf("Grade : %c",grade);
	return 0;
}