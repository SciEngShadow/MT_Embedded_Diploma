/***************************************************************************************************
 * Name: Assignment1_Ex15.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:   a program to calculate the power of a number..
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	int num,pow;
	long long base;

	printf("Enter Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("Enter Power:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&pow);

	base=1;
	for(int i=0;i<pow;i++)
	{
		base*=num;
	}
	printf("%d to power %d: %lld",num,pow,base);

	return 0;
}
