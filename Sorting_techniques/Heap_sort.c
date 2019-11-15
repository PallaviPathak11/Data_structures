/*
 * Heap_sort.c
 *
 *  Created on: 15-Nov-2019
 *      Author: pallavi
 */

#include <stdio.h>
#define MAX 1000

void heap_sort(int arr[], int size);
void build_heap_bottom_up(int arr[], int n);
int delete_root(int arr[], int *pn);
void restore_down(int arr[], int i, int size);

int main()
{
	struct node *root = NULL;
	int arr[MAX];
	int i,size;

	printf("Enter the size of an array: \n");
	scanf("%d",& size);
	for(i = 0; i <= size - 1; i++)
	{
		printf("Enter value at %d\n", i+1);
		scanf("%d", &arr[i]);
	}
	heap_sort(arr, size);
	printf("Sorted array is : \n");

	for(i = 0; i <= (size -1 ); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


void heap_sort(int arr[], int size)
{

	int max;
	build_heap_bottom_up(arr, size);

	while(size > 1)
	{
		max = delete_root(arr, &size);
		arr[size + 1] = max;

	}
}

void build_heap_bottom_up(int arr[], int n)
{
	int i;
	for(i = n/2; i >=1; i--)
	{
		restore_down(arr, i, n);
	}

}

int delete_root(int arr[], int *pn)
{
	int value = arr[1];
	arr[1] = arr[*pn];
	(*pn)--;
	restore_down(arr, 1, pn);
	return value;

}

void restore_down(int arr[], int i, int size)
{
	int k = arr[i];
	int lchild = 2*k;
	int rchild = lchild +1;

	while (rchild <= size)
	{
		if(k >= arr[lchild] &&  k >= arr[rchild])
		{
			arr[i] = k;
			return;
		}
		else if(arr[lchild] > arr[rchild])
		{
			arr[i] = arr[lchild];
			i = lchild;
		}
		else
		{
			arr[i] = arr[rchild];
			i = rchild;
		}

		lchild = 2 * i;
		rchild = lchild + 1;
	}

	/*If number of nodes is even */
	if(lchild == size && k < arr[lchild])
	{
		arr[i] = arr[lchild];
		i = lchild;
	}

	arr[i] = k;
}
