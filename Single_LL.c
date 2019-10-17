/*
 * Single_LL.c
 *
 *  Created on: 15-Oct-2019
 *      Author: pallavi & Akshay
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
};


struct node *Insert_at_start(struct node *start, int data);
void Insert_at_end(struct node *start, int data);

int main()
{
	int n, data;
	// No. of nodes to add
	printf("Enter no. of nodes to be created:\n");
	scanf("%d", &n);
	//Adding first element to empty list.
	struct node *start = NULL;


	//Creating nodes.
	for(int i=0; i< n; i++)
	{

		printf("Enter the data of %d th node:\n", i);
		scanf("%d",&data);
		if (i!=0)
		{
			Insert_at_end(start, data);
		}
		else
		{
			start = Insert_at_start(start, data);
		}

	}

	//Printing info of nodes
	struct node *q;
	q = start;
	printf("Created link_list is:");
	while(q != NULL)
	{
		printf("%d\t", q->info);
		q = q->link;
	}

	return 0;
}

struct node *Insert_at_start(struct node *start, int data)
{
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->info = data;
	temp->link = start;
	start = temp;
	return start;
}


void Insert_at_end(struct node *start, int data)
{
	struct node *p;
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	p = start;

	while(p->link != NULL)
	{
		p = p->link;
	}

	p->link = temp;
	temp->link = NULL;
	temp->info = data;
	//start = temp;

}

