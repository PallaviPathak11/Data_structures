/*
 * Binary_search.c
 *
 *  Created on: 18-Nov-2019
 *      Author: pallavi
 */


#include <stdio.h>
#define MAX 1000

int binary_search(int arr[], int size, int search_element);


int main()
{
	int arr[10];
	int i,size;
	int search_element;
	int result;

	printf("Enter the size of an array: \n");
	scanf("%d",& size);
	for(i = 0; i <= size - 1; i++)
	{
		printf("Enter value at %d\n", i+1);
		scanf("%d", &arr[i]);
	}

	printf("Enter the element that is to be searched\n");
	scanf("%d",& search_element);

	result = binary_search(arr, size, search_element);
	if(result == -1)
		printf("Search was unsuccessful\n");
	else
		printf("Element %d was found at %dth location of an array\n", search_element, result);
	return 0;
}

int binary_search(int arr[], int size, int search_element)
{
	int mid, first, last;
	first = 0;
	last = size - 1;

	while(first <= last)
	{
		mid = (first + last)/2;
		if(search_element < arr[mid])
			last = mid - 1; /* Search in left half */
		else if(search_element > arr[mid])
			first = mid + 1; /* Search in right half */
		else
			return mid;
	}
	return-1; /* Search is unsuccessful */
}
