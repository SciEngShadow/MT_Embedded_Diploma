/***************************************************************************************************
 * Name: Assignment1_Ex5.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:  a program to print the ASCII value of a character input by the user
 ***************************************************************************************************/

#include<stdio.h>

int main()
{
	char ch;

	printf("Enter your Character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

	printf("ASCII of %c:\t%d",ch,ch);

	return 0;
}

