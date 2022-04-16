/***************************************************************************************************
 * Name: Assignment2_Ex5.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function that converts the any letter from lowercase to uppercase
 ***************************************************************************************************/
#include<stdio.h>

char ToUpper(char ch);

int main()
{
	char ch;

	printf("Enter your Letter:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

	printf("%c",ToUpper(ch));

	return 0;

}

char ToUpper(char ch)
{
	if(ch>='a'&&ch<='z')
		return (ch-32);
	else if (ch>='A'&&ch<='Z')
		return ch;
	else
		return 0;
}
