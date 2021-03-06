/***************************************************************************************************
 * Name: Assignment2_Ex18.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: Given two integers: L and R, Find the maximal value of A xor B where A and B
 * 				satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <=1000
 ***************************************************************************************************/


#include<stdio.h>

int maxXOR(int L,int R);

int main()
{
	int L,R;

	printf("Enter Number L:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&L);

	printf("Enter Number R:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&R);

	printf("%d XOR %d: %d",L,R,maxXOR(L,R));

	return 0;
}


int maxXOR(int L,int R)
{
	int i,j,max_xor=0,temp=0;
	for(i=L;i<=R;i++)
	{
		for(j=i;j<=R;j++)
		{
			temp=L^R;
			if(temp>max_xor)
			{
				max_xor=temp;
			}
		}
	}
	return max_xor;
}
