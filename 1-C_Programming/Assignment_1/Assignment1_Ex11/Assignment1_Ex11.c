/***************************************************************************************************
 * Name: Assignment1_Ex11.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:  Print sum of first 100 integers. (With data validation).
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	int sum =0;
	for(int i=1;i<=100;i++)
	{
		sum+=i;
	}
	printf("sum of first 100:%d\n",sum);

	if(sum==5050)
	{
		printf("sum is correct");
	}
	else
		printf("sum isn't correct");

	return 0;
}
