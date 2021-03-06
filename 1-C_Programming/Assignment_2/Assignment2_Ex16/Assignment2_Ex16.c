/***************************************************************************************************
 * Name: Assignment2_Ex16.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C function to count the number of 1?s in an unsigned 32-bit integer.
 ***************************************************************************************************/

#include<stdio.h>

int OnesInBinary(unsigned int num);
void print_binary(unsigned int num);

int main()
{
	unsigned int num;

	printf("Enter Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("Number in binary:");
	print_binary(num);
	printf("\nNumber of Ones:%d",OnesInBinary(num));

	return 0;
}

int OnesInBinary(unsigned int num)
{
	int bits_num,i,count=0;
	bits_num=sizeof(num)*8;

	for(i=0;i<bits_num;i++)
	{
		if((num<<i)&0x80000000)
			count++;
	}
	return count;
}

void print_binary(unsigned int num)
{
	int Bits_Num=sizeof(num)*8,i;
	unsigned int mask=0x80000000;

	for(i=0;i<Bits_Num;i++)
	{
		if( (num<<i) & mask)
			printf("1");
		else
			printf("0");

	}
}
