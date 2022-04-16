/***************************************************************************************************
 * Name: Assignment2_Ex1.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function that prints the cube of any number
 ***************************************************************************************************/

#include<stdio.h>

int getCube(int num);


int main()
{

	int num,cube;

	printf("Enter Your Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	cube=getCube(num);
	printf("Cube of %d=%d",num,cube);

	return 0;
}

int getCube(int num)
{
	return num*num*num;
}
