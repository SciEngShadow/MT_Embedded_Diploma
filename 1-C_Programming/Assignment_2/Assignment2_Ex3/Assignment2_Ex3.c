/***************************************************************************************************
 * Name: Assignment2_Ex3.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function that check if the number if positive or negative
 ***************************************************************************************************/
#include<stdio.h>

int PosNeg(int num);

int main()
{
	int num,check;

	printf("Enter your Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	check=PosNeg(num);

	if(check==1)
		printf("Positive");
	else if(check==-1)
		printf("Negative");
	else
		printf("Zero");
}

int PosNeg(int num)
{
	if(num>0)
		return 1;
	else if(num<0)
		return -1;
	else
		return 0;
}
