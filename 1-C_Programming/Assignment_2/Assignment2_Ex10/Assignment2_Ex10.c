/***************************************************************************************************
 * Name: Assignment2_Ex10.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: designing a poster which prints out numbers with a unique style applied to each of them
 ***************************************************************************************************/

#include<stdio.h>

int HoleNum(int num);

int main()
{
	int num;

	printf("Enter your Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("%d has %d holes",num,HoleNum(num));

	return 0;

}

int HoleNum(int num)
{
	int rem,count=0;
	for(int i=0;num!=0;i++)
	{
		rem=num%10;
		num/=10;
		switch(rem)
		{
		 	 case 0: {++count;break;}
		 	 case 4: {++count;break;}
		 	 case 6: {++count;break;}
		 	 case 8: {count+=2;break;}
		 	 case 9: {++count;break;}
		 	 default:{count+=0;break;}
		}
	}
	return count;
}
