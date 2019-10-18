/*
 * queue_using_linklist.c
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

struct node *front; // points to first element of Link list
struct node *rear;

void initialize_Queue();
int isQueueEmpty();
int isQueueFull();
void Enqueue(int data);
int Dequeue();
void Q_display();
int Q_size();
int peek();

int main()
{
	initialize_Queue();
	int choice = 0;
	int x;
	while(1)
	{
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1 :
			printf("Element to be inserted \n");
			scanf("%d",&x);
			Enqueue(x);
			break;

		case 2 :
			printf("Dequeued element is %d\n", Dequeue());
			break;

		case 3 :
			Q_display();
			break;
		}
	}
	return 0;
}


void initialize_Queue()
{
	rear = NULL;
	front = NULL;
}

int isQueueEmpty()
{
	if(front == NULL)
		return 1;
	else
		return 0;

}

int isQueueFull()
{
	if(rear == NULL)
			return 1;
		else
			return 0;
}

int Q_size()
{
	int s = 0;
	struct node *p;
	p = front;
	while(p != NULL)
	{
		s++;
		p = p->link;
	}
	return s;
}


void Enqueue(int data)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("No memory, queue overflow\n");
		return;
	}
	temp->info = data;
	temp->link = NULL;

	if (front == NULL)
	{
		front = temp; //For inserting an element in empty queue
	}
	else
	{
		rear->link = temp;
	}
	rear = temp;
}

int Dequeue()
{
	int dequeued_element;
	struct node *temp;
	if(isQueueEmpty())
	{
		printf("Queue underflow\n");
		exit(1);
	}

	temp = front;
	dequeued_element = front->info;
	front = front->link;
	free(temp);
	return dequeued_element;
}

void Q_display()
{
	struct node *temp;
	temp = front;
	if(isQueueEmpty())
		{
			printf("Queue is empty\n");
			exit(1);
		}
	printf("Dequeued data is : \n");
	while(temp != NULL)
	{
		printf("%d", temp->info);
		temp = temp->link;
	}
}

int peek()
{
	if(isQueueEmpty())
	{
		printf("Queue is empty\n");
		exit(1);
	}
	return front ->info;;
}


