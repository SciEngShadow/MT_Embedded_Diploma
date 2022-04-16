/***************************************************************************************************
 * Name: Assignment2_Ex5.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: Write a C function to check if the input is an even number or an odd number, if even number return 0 if odd number return 1.
 ***************************************************************************************************/
#include<stdio.h>

int EvenOdd(int num);

int main()
{
	int num,check;

	printf("Enter your Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	check=EvenOdd(num);
	if(check==-1)
		printf("Nor Even or Odd");
	else
		printf("Input:%d, Output:%d",num,check);

	return 0;
}

int EvenOdd(int num)
{
	if(num==0)
		return -1;
	else if (num%2==0)
		return 0;
	else
		return 1;
}
