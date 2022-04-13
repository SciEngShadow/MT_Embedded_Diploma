/***************************************************************************************************
 * Name: Assignment1_Ex10.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:  Simple Calculator.
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	float num1,num2;
	char sign;

	printf("Enter Number1:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num1);

	printf("Enter Number2:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num2);

	printf("Enter Operation:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&sign);

	switch(sign)
	{
	case '+':
		{
			printf("%f+%f=%f",num1,num2,num1+num2);
			break;
		}
	case '-':
		{
			printf("%f-%f=%f",num1,num2,num1-num2);
			break;
		}
	case '*':
		{
			printf("%fx%f=%f",num1,num2,num1*num2);
			break;
		}
	case '/':
		{
			if(num2!=0)
				printf("%f/%f=%f",num1,num2,num1/num2);
			else
				printf("Division By Zero");
			break;
		}
	}

	return 0;
}
