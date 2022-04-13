/***************************************************************************************************
 * Name: Assignment1_Ex2.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: program that print your name and your grade in a new line
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	char name[20];
	int grade;

	printf("Enter your Name:");
	fflush(stdin);fflush(stdout);
	gets(name);

	printf("Enter your Grade:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&grade);

	printf("Name:%s Grade:%d",name,grade);

	return 0;

}
