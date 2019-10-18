/*
 * stack_using_Linklist.c
 *
 *  Created on: 18-Oct-2019
 *      Author: pallavi
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *top; // points to first element of Link list

void initialize_stack();
int isEmpty();
void push_stack(int data);
int pop_stack();
void display();
int size();

int main()
{
	initialize_stack();
		int choice = 0;
		int x;
		//int y;
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
				printf("popped element is %d\n", pop_stack());
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
	top = NULL;
}

void push_stack(int data)
{
	struct node *temp;
	//New node creation
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("No memory, stack overflow");
		return;
	}
	temp->info = data;
	temp->link = top;
	top = temp;
}

int size()
{
	int size = 0;
	struct node *p = top; // A pointer
	while(p != NULL)
	{
		size++;
		p = p->link;
	}
	return size;
}

int isEmpty()
{
	if(top == NULL)
		return 1;
	else
		return 0;
}

int pop_stack()
{
	int popped_data;
	struct node *temp;
	if(isEmpty())
	{
		printf("stack underflow");
		exit(1);
	}
	temp = top;
	popped_data = temp->info;
	top = top->link;
	free(temp);
	return popped_data;
}

void display()
{
	struct node *p;
	p = top;
//	if(isEmpty)
//	{
//		printf("stack is empty\n");
//		return;
//	}

	printf("Stack is :\n");
	while(p != NULL)
	{
		printf("%d\n", p->info);
		p = p->link;
	}
	printf("\n");
}



