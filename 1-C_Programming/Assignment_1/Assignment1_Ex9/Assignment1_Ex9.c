/***************************************************************************************************
 * Name: Assignment1_Ex9.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:  a program that reads a student grade percentage.
 ***************************************************************************************************/

#include<stdio.h>

int main()
{
	float grade;

	printf("enter your grade:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&grade);

	if(grade>=85)
		printf("Excellent");
	else if(grade>=75)
		printf("Very Good");
	else if(grade>=65)
		printf("Good");
	else if(grade>=50)
		printf("Pass");
	else
		printf("Fail");

	return 0;
}
