/***************************************************************************************************
 * Name: Assignment2_Ex11.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: Check Power of 2
 ***************************************************************************************************/

#include<stdio.h>
#include<math.h>

int Power2Check(int num);

int main()
{
	int num;

	printf("Enter your Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	Power2Check(num)?printf("%d is power of 2",num):printf("%d isn't a power of 2",num);
}

int Power2Check(int num)
{
	double logRes=(log(num)/log(2))*100;
	int rem =(int)logRes%100;

	if(rem==0&&(num!=1))
		return 1;
	else
		return 0;
}
