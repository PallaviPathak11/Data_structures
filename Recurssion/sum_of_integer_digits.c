/*
 * sum_of_integer_digits.c
 *
 *  Created on: 22-Oct-2019
 *      Author: pallavi
 */


#include <stdio.h>
 int sum_digits(int n);

int main()
{
	int result;
	long int n;
	while(1)
	{
		printf("Enter the integer number\n");
		scanf("%d", &n);
		result = sum_digits(n);
		printf("Sum of the integer digit is: %d \n", result);
	}
	return 0;
}


int sum_digits(int n)
{
	if(n/10 == 0)
		return n;
	return (sum_digits(n/10) + n%10);
}
