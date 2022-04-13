/***************************************************************************************************
 * Name: Assignment1_Ex20.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: a program to display cross or X-shape using stars pattern
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
		for(int j=1;j<=row;j++)
		{
			if((i==j)||(j==(row-i+1)))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
