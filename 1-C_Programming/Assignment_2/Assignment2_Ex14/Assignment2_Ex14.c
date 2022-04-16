/***************************************************************************************************
 * Name: Assignment2_Ex14.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function that calculate the Fibonacci series using recursive method.
 ***************************************************************************************************/

#include<stdio.h>

long fibonacci(long num);

int main()
{
	long num;

	printf("Enter Number:");
	fflush(stdin);fflush(stdout);
	scanf("%ld",&num);

	printf("Fibonnaci = %ld",fibonacci(num));

}

long fibonacci(long num)
{
	if(num==0||num==1)
		return num;
	else
		return fibonacci(num-1)+fibonacci(num-2);
}
