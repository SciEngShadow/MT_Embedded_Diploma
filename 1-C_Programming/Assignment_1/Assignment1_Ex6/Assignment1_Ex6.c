/***************************************************************************************************
 * Name: Assignment1_Ex6.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:  a program that print the relation between two integer number if those numbers are equal, not equal and which one contain the higher value
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	int num1, num2;

	printf("Enter your Number1:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);

	printf("Enter your Number2:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);

	if(num1>num2)
		printf("%d > %d",num1,num2);
	else if(num1==num2)
		printf("%d = %d",num1,num2);
	else
		printf("%d > %d",num2,num1);

	return 0;
}
