/*
 * fibonacci_series.c
 *
 *  Created on: 22-Oct-2019
 *      Author: pallavi
 */

#include <stdio.h>
int fibonacci(int n);

int main()
{
	int result;
	int i, n;
	while(1)
	{
		printf("Enter the number\n");
		scanf("%d", &n);
		printf("Series is: \n");
		for(i = 0; i <= n; i++)
		{
			result = fibonacci(i);
			printf("%d ", result);
		}

	}
	return 0;
}


int fibonacci(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
			return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

