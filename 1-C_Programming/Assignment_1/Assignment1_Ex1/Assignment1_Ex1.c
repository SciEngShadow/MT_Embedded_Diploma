/***************************************************************************************************
 * Name: Assignment1_Ex1.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: program that take two integers from the user and print the results of this equation
 ***************************************************************************************************/

#include<stdio.h>

int main()
{
	int num1,num2,result;

	// getting first number
	printf("Enter First Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);

	// getting second number
	printf("Enter Second Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);

	// applying equation
	result = ((num1+num2)*3)-10;
	printf("((%d + %d)*3)-10 = %d",num1,num2,result);

	return 0;
}

