/***************************************************************************************************
 * Name: Assignment1_Ex12.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:   a program that reads a positive integer and computes the factorial.
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	long num,factorial=1;

	printf("Enter a Number to Calculate its Factorial: ");
	fflush(stdin);fflush(stdout);
	scanf("%ld",&num);

	for(int i=1;i<=num;i++)
		factorial*=i;

	printf("Factorial of %ld: %ld",num,factorial);

	return 0;
}
