/***************************************************************************************************
 * Name: Assignment2_Ex2.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function that takes one character and checks if it alphabet or not
 ***************************************************************************************************/

#include<stdio.h>

char IsAlpha(char ch);

int main()
{
	char ch, check;

	printf("Enter your Character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	check=IsAlpha(ch);
	if(check==1)
		printf("%c is an Alphabet",ch);
	else
		printf("%c isn't an Alphabet",ch);

	return 0;

}
char IsAlpha(char ch)
{
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
		return 1;
	else
		return 0;
}
