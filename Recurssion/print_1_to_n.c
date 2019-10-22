/*
 * print_1_to_n.c
 *
 *  Created on: 22-Oct-2019
 *      Author: pallavi
 */

#include <stdio.h>
void print_numbers(int n);

int main()
{
	int n;
	while(1)
	{
		printf("\nEnter the number\n");
		scanf("%d", &n);
		print_numbers(n);
	}
	return 0;
}


void print_numbers(int n)
{
	if(n == 0)
		return;
	print_numbers(n-1);
	printf("%d ",n);
}


