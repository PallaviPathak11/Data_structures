/*
 * power_of_number.c
 *
 *  Created on: 22-Oct-2019
 *      Author: pallavi
 */


#include <stdio.h>
float power_n(float n , int power);

int main()
{
	float result;
	float num;
	int power_num;
	while(1)
	{
		printf("Enter the number\n");
		scanf("%f", &num);
		printf("Enter the power\n");
		scanf("%d", &power_num);
		result = power_n(num , power_num);
		printf("result is: %f \n", result);
	}
	return 0;
}


float power_n(float n , int power)
{
	if(power == 0)
		return 1.00;
	return n * power_n(n , power-1);
}
