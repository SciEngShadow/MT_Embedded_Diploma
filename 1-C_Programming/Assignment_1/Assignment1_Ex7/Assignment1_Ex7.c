/***************************************************************************************************
 * Name: Assignment1_Ex7.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:  a program that takes three integers, and prints out the smallest number
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	int num1,num2,num3,smallest;

	printf("Enter Num1:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);

	printf("Enter Num2:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);

	printf("Enter Num3:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num3);

	smallest=num1;
	if(num2<=smallest)
		smallest=num2;
	if(num3<=smallest)
		smallest=num3;

	printf("Smallest Num is: %d",smallest);

	return 0;
}
