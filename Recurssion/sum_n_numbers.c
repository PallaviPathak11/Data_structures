/*
 * sum_n_numbers.c
 *
 *  Created on: 22-Oct-2019
 *      Author: pallavi
 */


#include <stdio.h>
int sum(int n);

int main()
{
    int result;
	int n;
	while(1)
	{
		printf("Enter the number for sum from 1 to n\n");
		scanf("%d", &n);
		result = sum(n);
		printf("Sum is : %d\n", result) ;
	}
	return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;
	return (n + sum(n-1));
}
