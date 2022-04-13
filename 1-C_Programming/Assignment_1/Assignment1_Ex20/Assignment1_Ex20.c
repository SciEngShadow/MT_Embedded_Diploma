/***************************************************************************************************
 * Name: Assignment1_Ex20.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: program to display a full pyramid using stars pattern.
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
		for(int j=1;j<=(2*row-1);j++)
		{
			if((j>=row-i+1)&&(j<=row+i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

