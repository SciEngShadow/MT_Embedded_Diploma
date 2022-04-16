/***************************************************************************************************
 * Name: Assignment2_Ex19.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: Given a positive integer z, check if z can be written as p^q, where p
 * 				and q are positive integers than 1, if z can be written as p^q return 1 else
 * 				return 0
 ***************************************************************************************************/

#include<stdio.h>
#include<math.h>

int check_pPowq(int num);

int main()
{
	int num,flag;

	printf("Enter Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	flag=check_pPowq(num);

	if(flag==1)
		printf("Can Expressed");
	else
		printf("Can't Expressed");

	return 0;
}

int check_pPowq(int num)
{
	int sqr=(int)sqrt(num);

	if(num==(sqr*sqr))
		return 1;
	else
		return 0;
}
