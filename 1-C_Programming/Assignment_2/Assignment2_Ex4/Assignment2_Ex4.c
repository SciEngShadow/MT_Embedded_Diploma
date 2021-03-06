/***************************************************************************************************
 * Name: Assignment2_Ex4.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C Function acts as Simple Calculator
 ***************************************************************************************************/

#include<stdio.h>

int SimpleCalc(int num1,int num2, char sign);

int main()
{
	int num1,num2;
	char sign;

	printf("Enter First Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);

	printf("Enter Second Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);

	printf("Enter Operation:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&sign);

	printf("Result:%d",SimpleCalc(num1,num2,sign));

	return 0;
}

int SimpleCalc(int num1,int num2, char sign)
{
	switch(sign)
	{
	case '+': {return (num1+num2); break;}
	case '-': {return (num1-num2); break;}
	case '*': {return (num1*num2); break;}
	case '/': {
				if(num2==0)
					{
						printf("Division By Zero\n");return 404;break;
					}
				else
					{
					return (num1/num2); break;
					}
				}
	default: {
				printf("ERROR!0!\n");return 404; break;
			 }

	}
}
