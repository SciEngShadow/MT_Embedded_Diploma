/***************************************************************************************************
 * Name: Assignment1_Ex3.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: converting temperature from degrees Celsius to degrees Fahrenheit
 ***************************************************************************************************/
#include<stdio.h>

int main()
{
	float celsius,fahrenheit;

	printf("Enter Your Temp In Celsius:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&celsius);

	fahrenheit=celsius*9/5+32;

	printf("Degree in Fahrenheit:%f",fahrenheit);

	return 0;

}
