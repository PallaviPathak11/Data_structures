/*
 * dec_to_bin.c
 *
 *  Created on: 22-Oct-2019
 *      Author: pallavi
 */


#include <stdio.h>
void to_binary(int n);

int main()
{
	int n;
	while(1)
	{
		printf("Enter the number\n");
		scanf("%d", &n);
		to_binary(n);
		//printf("Sum of the integer digit is: %d \n", result);
	}
	return 0;
}


void to_binary(int n)
{
	if(n == 0)
		return;
	to_binary(n/2);
	printf("%d ",n%2);

}
