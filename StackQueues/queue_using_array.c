/*
 * Queue_using_array.c
 *
 *  Created on: 18-Oct-2019
 *      Author: pallavi
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int front, rear;
int array[MAX];

void initialize_Queue();
int isQueueEmpty();
int isQueueFull();
void Enqueue(int data);
int Dequeue();
void Q_display();
int Q_size();

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
	rear = -1;
	front = -1;
}

int isQueueEmpty()
{
	if((front == -1) || (front == (rear+1)))
		return 1;
	else
		return 0;
}

int isQueueFull()
{
	if(rear == (MAX - 1))
	return 1;
else
	return 0;
}

int Q_size()
{
	if(isQueueEmpty())
		return 0;
	else
		return rear-front+1;
}

void Enqueue(int data)
{
	if(isQueueFull())
	{
		printf("Queue overflow\n");
		return;
	}

	if(front == -1)
	{
		front = 0;
	}

	rear = rear+1;
	array[rear] = data;
}

int Dequeue()
{
	int dequeued_data;
	if(isQueueEmpty())
	{
		printf("Queue underflow\n");
		exit(1);

	}
	dequeued_data = array[front];
	front = front-1;
	return dequeued_data;
}

void Q_display()
{
	int i;
	if(isQueueEmpty())
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue is : \n");

	for(i = front; i <= rear; i++)
	{
		printf("%d\n", array[i]);
	}


}
