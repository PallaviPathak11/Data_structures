/*
 * Merging_arrays.c
 *
 *  Created on: 12-Nov-2019
 *      Author: pallavi
 */


#include <stdio.h>
#define MAX 10

void merge_array(int a[], int b[], int temp[], int size1, int size2);
int main()
{
	int arr1[MAX];
	int arr2[MAX];
	int merge_arr[2 * MAX];
	int i;
	int size1,size2;
	int temp = 0;

	printf("Enter the size of array1: \n");
	scanf("%d",& size1);
	for(i = 0; i <= size1 - 1; i++)
	{
		printf("Enter value at %d\n", i+1);
		scanf("%d", &arr1[i]);
	}

	printf("Enter the size of array2 : \n");
	scanf("%d",& size2);
	for(i = 0; i <= size2 - 1; i++)
	{
		printf("Enter value at %d\n", i+1);
		scanf("%d", &arr2[i]);
	}

	merge_array(arr1, arr2, merge_arr, size1, size2);
	return 0;
}



void merge_array(int a[], int b[], int temp[], int size1, int size2)
{
	int i=0,j=0,k=0;

	while((i<=size1-1) && (j<=size2-1))
	{
		if(a[i] < b[j])
		{
			temp[k] = a[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = b[j];
			j++;
			k++;
		}
	}

	while(i <= size1-1) // This executes when size of second array reaches to maximum size.
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while(i <= size2-1) // This executes when size of first array reaches to maximum size.
	{
		temp[k] = b[j];
		k++;
		j++;
	}

	printf("Merged and sorted array is : \n");

	for(i = 0; i <= (size1 + size2 - 1); i++)
	{
		printf("%d ", temp[i]);
	}
}
