/***************************************************************************************************
 * Name: Assignment1_Ex18.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: a program to display half pyramid using stars pattern.
 ***************************************************************************************************/
#include<stdio.h>

//int main()
//{
//	int row=0,coloumn=0;
//
//	printf("enter no. of rows:");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&row);
//
//	printf("enter no. of coloumns:");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&coloumn);
//
//	for(int i=1;i<=row;i++)
//	{
//		for(int j=1;j<=coloumn;j++)
//		{
//			if(i>=j)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

int main()
{
	int row=0;

	printf("enter no. of rows:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&row);


	for(int i=1;i<=row;i++)
	{
		for(int j=1;i>=j;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
