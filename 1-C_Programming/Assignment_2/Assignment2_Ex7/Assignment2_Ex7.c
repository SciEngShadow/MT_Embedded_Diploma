/***************************************************************************************************
 * Name: Assignment2_Ex7.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function that reads two integers and checks if the first is multiple of the second
 ***************************************************************************************************/

#include<stdio.h>

void CheckMulti(int num1,int num2);

int main()
{
	int num1,num2;

	printf("Enter First Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);

	printf("Enter Second Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);

	CheckMulti(num1,num2);

	return 0;
}

void CheckMulti(int num1,int num2)
{
	if(num1%num2==0)
	{
		printf("%d is Multiple of %d",num1,num2);
	}
	else
		printf("%d isn't Multiple of %d",num1,num2);
}
