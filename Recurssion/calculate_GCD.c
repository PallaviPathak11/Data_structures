/*
 * calculate_GCD.c
 *
 *  Created on: 22-Oct-2019
 *      Author: pallavi
 */


#include <stdio.h>
int GCD(int a, int b);

int main()
{
	int result;
	int a,b;
	while(1)
	{
		printf("Enter the number1\n");
		scanf("%d", &a);
		printf("Enter the number2\n");
		scanf("%d", &b);
		result = GCD(a , b);
		printf("result is: %d \n", result);
	}
	return 0;
}


int GCD(int a, int b)
{
	if(b == 0)
		return a;
	return GCD(b, a%b);
}
