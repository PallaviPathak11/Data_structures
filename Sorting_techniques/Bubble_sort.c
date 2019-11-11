/*
 * Bubble_sort.c
 *
 *  Created on: 11-Nov-2019
 *      Author: pallavi
 */


#include <stdio.h>
#define MAX 10
int arr[MAX];
int main()
{
	int i,j, swaps;
	int size, minindex;
	int temp = 0;
	printf("Enter the size : \n");
	scanf("%d",& size);
	for(i = 0; i <= size - 1; i++)
	{
		printf("Enter value at %d\n", i+1);
		scanf("%d", &arr[i]);

	}

	for(i = size - 2; i >= 0; i--)
	{
		swaps = 0;
		for(j=0; j <= i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swaps++;
			}
		}
		if(swaps == 0)
			break;

	}

	printf("Sorted array is : \n");

	for(i = 0; i <= size - 1; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}
