/*
 * Merge_sort_recurssion.c
 *
 *  Created on: 13-Nov-2019
 *      Author: pallavi
 */


#include <stdio.h>
#define MAX 10

void merge_sort(int a[], int low, int up);
void merge(int a[], int temp[],int low1, int up1, int low2, int up2);
void copy(int a[],int temp[], int low, int up);
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

	merge_sort(arr, 0, size);

	printf("Merged and sorted array is : \n");

	for(i = 0; i <= (size ); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

void merge_sort(int a[], int low, int up)
{
	int mid;
	int temp[MAX];

	if(low == up)
		return;    //condition to break recursion.

	mid = (low + up)/2;
	merge_sort(a, low, mid); // sort a[low] to a[mid]
	merge_sort(a, mid+1, up); // sort a[mid] to a[up]

	//merge a[low]...a[mid] and a[mid +1] to a[up] to temp[low].... temp[up]
	merge(a, temp, low, mid, mid+1, up);

	//copy temp[low]...temp[up] to a[low] ... a[high]
	copy(a, temp, low, up);
}


void merge(int a[], int temp[],int low1, int up1, int low2, int up2)
{
	int i=low1,j=low2,k=low1;

	while((i<=up1) && (j<=up2))
	{
		if(a[i] < a[j])
		{
			temp[k] = a[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}

	while(i <= up1) // This executes when size of second array reaches to maximum size.
	{
		temp[k]= a[i];
		k++;
		i++;
	}

	while(j <= up2) // This executes when size of first array reaches to maximum size.
	{
		temp[k] = a[j];
		k++;
		j++;
	}
}


void copy(int a[],int temp[], int low, int up)
{
	int i;
	for(i = low; i <= up; i++)
	{
		a[i] = temp[i];
	}

}
