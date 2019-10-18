/*
 * stack_using_array.c
 *
 *  Created on: 18-Oct-2019
 *      Author: pallavi
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int array[MAX];
int top = 0;

void initialize_stack();
int isFull();
int isEmpty();
int size();
void push_stack(int data);
int popstack();
void display();


int main()
{
	initialize_stack();
	int choice = 0;
	int x;
	int y;
	while(1)
	{
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1 :
			printf("Element to be pushed\n");
			scanf("%d",&x);
			push_stack(x);
			break;

		case 2 :
			printf("popped element is %d\n", popstack());
			break;

		case 3 :
			display();
			break;
		}

	}
	return 0;

}


void initialize_stack()
{
	top = -1;
}

int size()
{
	return top+1;
}

int isEmpty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}

int isFull()
{
	if(top == (MAX -1))
		return 1;
	else
		return 0;
}

void push_stack(int data)
{
	if(isFull())
	{
		printf("Stack overflow");
		return;
	}

	top = top+1;
	array[top] = data;
}

int popstack()
{
	int popped_element;
	if(isEmpty())
	{
		printf("Stack underflow");
		exit(1);
	}
	popped_element = array[top];
	top = top -1;
	return popped_element;
}


void display()
{
	int i;
	printf("top is: %d\n", top);
	if(isEmpty())
	{
		printf("stack is empty");
		return;
	}
	printf("stack is : ");
	for(i=top; i>=0; i--)
	{
		printf("%d\n", array[i]);
	}

}
