/***************************************************************************************************
 * Name: Assignment2_Ex13.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: function to add two floating numbers. Determine the integer floor of the sum.
 ***************************************************************************************************/

#include<stdio.h>

int floorfn(float num1,float num2);

int main()
{
	float num1,num2;

	printf("Enter Number1:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num1);

	printf("Enter Number2:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num2);

	printf("floor(%.2f+%.2f)=floor(%.2f)=%d",num1,num2,num1+num2,floorfn(num1,num2));

}

int floorfn(float num1,float num2)
{
	float add=num1+num2;

	return add;

}
