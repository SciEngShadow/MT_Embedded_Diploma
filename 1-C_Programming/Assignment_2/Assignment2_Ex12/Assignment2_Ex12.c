/***************************************************************************************************
 * Name: Assignment2_Ex12.c
 * Author: Ahmed M. AbdEl-kareem
 * Description: C function that calculates the required heater activation time according to the input temperature of wate
 ***************************************************************************************************/

#include<stdio.h>

int ReqTime(int temp);

int main()
{
	int inputTemp,reqHeatingTime;

	printf("Enter Input Temperature:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&inputTemp);

	reqHeatingTime = ReqTime(inputTemp);
	printf("Input = %d -> Output = %d",inputTemp,reqHeatingTime);

	return 0;

}

int ReqTime(int temp)
{
	if((temp>=0)&&(temp<30))
		return 7;
	else if((temp>=30)&&(temp<60))
		return 5;
	else if((temp>=60)&&(temp<90))
		return 3;
	else if((temp>=90)&&(temp<=100))
		return 1;
	else
		return 0;
}
