/***************************************************************************************************
 * Name: Assignment1_Ex19.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: a program to display half pyramid using stars pattern.
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	int row=0;

	printf("enter no. of rows:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&row);


	for(int i=1;i<=row;i++)
	{
		for(int j=row;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
