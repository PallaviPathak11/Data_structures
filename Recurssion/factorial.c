/*
 * factorial.c
 *
 *  Created on: 22-Oct-2019
 *      Author: pallavi
 */

#include <stdio.h>
int factorial(int n);

int main()
{
    int fact;
	int n;
	while(1)
	{
		printf("Enter the number for factorial\n");
		scanf("%d", &n);
		fact = factorial(n);
		printf("Factorial is : %d\n", fact) ;
	}

	return 0;
}


int factorial(int n)
{
	if(n == 0)
		return 1;
	return n * factorial(n-1);
}
