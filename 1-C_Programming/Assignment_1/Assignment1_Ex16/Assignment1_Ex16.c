/***************************************************************************************************
 * Name: Assignment1_Ex16.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: a program to reverse a number.
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	long num,rem,reversed=0;

	printf("enter your number:");
	fflush(stdin);fflush(stdout);
	scanf("%ld",&num);

	while(num!=0)
	{
		rem=num%10;
		reversed=reversed*10+rem;
		num/=10;
		//printf("%ld",rem);
	}
	printf("%ld",reversed);
}
