/***************************************************************************************************
 * Name: Assignment2_Ex9.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function that swaps the value of two integer numbers
 ***************************************************************************************************/

#include<stdio.h>

void swap(int *ptr1,int *ptr2);


int main()
{
	int val1,val2,*ptr1,*ptr2;

	printf("Enter First Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&val1);

	printf("Enter Second Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&val2);

	ptr1=&val1;
	ptr2=&val2;

	swap(ptr1,ptr2);

	printf("After Swapping First Number:(%d), Second Number:(%d)",val1,val2);
}

void swap(int *ptr1,int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
