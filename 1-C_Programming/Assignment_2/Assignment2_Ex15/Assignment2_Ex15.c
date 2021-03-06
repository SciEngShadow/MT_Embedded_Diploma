/***************************************************************************************************
 * Name: Assignment2_Ex15.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C function to reverse the binary of an 8-bits number.
 ***************************************************************************************************/

#include<stdio.h>

unsigned char reverseBits(unsigned char num);
void print_binary(unsigned char num);

int main(void)
{
	unsigned char num1 = 0b11010001;
	unsigned char num2;

	printf("Binary of Num:\t");
	print_binary(num1);
	printf("\n");
	num2 = reverseBits(num1);
	printf("Reverse Binary of Num:\t");
	print_binary(num2);
}

unsigned char reverseBits(unsigned char num)
{
	unsigned char Bits_Num=sizeof(num)*8;
	unsigned char i,Reverse_Num=0;

	for(i=0;i<Bits_Num;i++)
	{
		if(num & (1<<i))
		{
			Reverse_Num|=( 1 << ( (Bits_Num-1) - i ) );
		}
	}

	return Reverse_Num;
}

void print_binary(unsigned char num)
{
	unsigned char Bits_Num=sizeof(num)*8,i;
	unsigned char mask=0x80;

	for(i=0;i<Bits_Num;i++)
	{
		if( (num<<i) & mask)
			printf("1");
		else
			printf("0");

	}
}
