/***************************************************************************************************
 * Name: Assignment2_Ex20.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: Write a C function that return 0 if a given number is a power of 3,
 * 				otherwise return 1
 ***************************************************************************************************/
#include<stdio.h>

int checkPow3(int num);

int main()
{
	int num,flag;

	printf("Enter Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	flag=checkPow3(num);

	if(flag==1)
		printf("%d: Power of 3",num);
	else
		printf("%d: Not a Power of 3",num);

	return 0;

}

int checkPow3(int num)
{
	if(num==1||num==0)
		return 0;
	else
	{
		for(;1;)
		{
			if( (num%3) == 0 )
				{
					if(num==3)
						return 1;
				}
			else
				return 0;

			num/=3;
		}

	}
}
