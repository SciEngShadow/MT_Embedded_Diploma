/***************************************************************************************************
 * Name: Assignment1_Ex17.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: a program to count number of digits in a decimal number.
 ***************************************************************************************************/
#include<stdio.h>


int main()
{
	int num;
	int count=0;

	printf("enter your number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	while(num!=0)
	{
		num/=10;
		count++;
	}
	printf("No. of Digits:%d",count);
}

