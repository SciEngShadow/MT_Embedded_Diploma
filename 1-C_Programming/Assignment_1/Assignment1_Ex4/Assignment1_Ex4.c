/***************************************************************************************************
 * Name: Assignment1_Ex4.c
 * Author: Ahmed M. AbdEl-kareem
 * Description:  program that reads the radius of a circle and calculates the area and circumference then prints the results
 ***************************************************************************************************/

#include<stdio.h>

int main()
{
	float radius,area,circum;

	printf("Enter Radius:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);

	area= 3.14*radius*radius;
	circum= 2*3.14*radius;

	printf("Area:%f\nCircum:%f",area,circum);

	return 0;
}
