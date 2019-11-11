/*
 * Selection_sort.c
 *
 *  Created on: 11-Nov-2019
 *      Author: pallavi
 */

#include <stdio.h>
#define MAX 10
int arr[MAX];
int main()
{
	int i,j;
	int size, minindex;
	int temp = 0;
	printf("Enter the size : \n");
	scanf("%d",& size);
	for(i = 0; i <= size - 1; i++)
	{
		printf("Enter value at %d\n", i+1);
		scanf("%d", &arr[i]);

	}

	for(i = 0; i < size-1; i++)
	{
		minindex= i;
		for(j = i+1; j < size; j++)
		{
			if(arr[j] < arr[minindex])
			{
				minindex = j;
			}
		}
		if(arr[i] > arr[minindex])
		{
			temp = arr[i];
			arr[i] = arr[minindex];
			arr[minindex] = temp;;
		}
	}

	printf("Sorted array is : \n");

	for(i = 0; i <= size - 1; i++)
	{
		printf("%d ", arr[i]);

	}


	return 0;
}
