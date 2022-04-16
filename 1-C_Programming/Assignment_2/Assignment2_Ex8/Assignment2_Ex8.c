/***************************************************************************************************
 * Name: Assignment2_Ex8.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function that display Prime Numbers between Intervals (two numbers) by Making Function
 ***************************************************************************************************/

#include<stdio.h>

int CheckPrime(int num);

int main()
{

	int min,max;

	printf("Enter Min:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&min);

	printf("Enter Max:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&max);

	for(int i=min;i<=max;i++)
	{
		if(CheckPrime(i)==0)
			printf("%d ",i);
	}

}

int CheckPrime(int num)
{
	int flag=0;
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
			{
				flag = 1;
				break;
			}
	}
	return flag;
}
