/***************************************************************************************************
 * Name: Assignment1_Ex13.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:   a program that reads a positive integer and checks if it is a prime.
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	int num,check=1;

	printf("Enter Your Positive Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	while(num<=0)
	{
		printf("Enter Your Positive Number:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&num);
	}

	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
			{
				check=0;
				break;
			}

	}
	if(check==1)
		printf("%d is prime",num);
	else
		printf("%d isn't prime",num);
}
