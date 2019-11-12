/*
 * Insertion_sort.c
 *
 *  Created on: 12-Nov-2019
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


	for(i = 1; i < size; i++)
	{
		temp = arr[i];
		for(j = i-1; j >= 0 && arr[j] > temp; j--)
		{
			arr[j+1] = arr[j];
		}

		arr[j+1] = temp;

	}

	printf("Sorted array is : \n");

	for(i = 0; i <= size - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
