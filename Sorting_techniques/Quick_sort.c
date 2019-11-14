/*
 * Quick_sort.c
 *
 *  Created on: 14-Nov-2019
 *      Author: pallavi
 */

#include <stdio.h>
#define MAX 10

void quick_sort(int a[], int low, int up);
int partition(int a[], int low, int up);

int main()
{
	int arr[MAX];
	int i,size;

	printf("Enter the size of an array: \n");
	scanf("%d",& size);
	for(i = 0; i <= size - 1; i++)
	{
		printf("Enter value at %d\n", i+1);
		scanf("%d", &arr[i]);
	}

	quick_sort(arr, 0, size-1);

	printf("Merged and sorted array is : \n");

	for(i = 0; i <= (size -1 ); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

void quick_sort(int a[], int low, int up)
{
	int p;//pivot
	if (low >= up)
	{
		return;
	}
	p = partition(a, low, up);
	quick_sort(a, low, p-1); //sort left sublist
	quick_sort(a, p+1, up);  //sort right sublist
}

int partition(int a[], int low, int up)
{
	int temp, i, j, pivot;
	pivot = a[low];

	i = low+1; // moves left to right
	j = up;    // moves right to left

	while(i <= j)
	{
		while(a[i] < pivot && i < up)
			i++;
		while(a[j] > pivot)
			j--;
		if(i<j) //swap i and j
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
		else /* Found proper place for Pivot */
			break;
	}

	/*Proper place for pivot is j*/
	a[low] = a[j];
	a[j] = pivot;
	return j;
}

