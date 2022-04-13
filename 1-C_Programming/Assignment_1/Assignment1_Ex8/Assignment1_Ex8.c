/***************************************************************************************************
 * Name: Assignment1_Ex8.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:  Write a program that reads a positive integer and checks if it is a perfect square.
 ***************************************************************************************************/
#include<stdio.h>
#include<math.h>

int main()
{
	int num,root;

	printf("Enter your Postive Integer Number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	root=sqrt(num);

	if(num==root*root)
		printf("%d is a perfect square",num);
	else
		printf("%d isn't a perfect square",num);

	return 0;

}
