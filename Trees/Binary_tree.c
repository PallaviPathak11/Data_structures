/*
 * Binary_search_tree.c
 *
 *  Created on: 24-Oct-2019
 *      Author: pallavi
 */


#include <stdio.h>
#include <stdlib.h>



struct node
{
	struct node *lchild;
	char info;
	struct node *rchild;
};


struct node *getnode(char x);
void display(struct node *p, int level);
void inorder(struct node *p);
void preorder(struct node *p);
void postorder(struct node *p);
int height(struct node *p);


int main()
{
	struct node *root = NULL;
	//Create a Binary tree
	root = getnode('P');
	root->lchild = getnode('Q');
	root->rchild = getnode('R');
	root->lchild->lchild = getnode('S');
	root->lchild->rchild = getnode('T');
	root->rchild->lchild = getnode('U');

	display(root,0);
	printf("\n\n");

	printf("Inorder is :");
	inorder(root);
	printf("\n\n");

	printf("preorder is :");
	preorder(root);
	printf("\n\n");


	printf("postorder is :");
	postorder(root);
	printf("\n\n");

	printf("Height is : %d " , height(root));
	printf("\n\n");

	return 0;
}


struct node *getnode(char x)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	p->info = x;
	p->lchild = p->rchild = NULL;
}


void display(struct node *p, int level)
{
	int i;
	if(p == NULL)
		return;
	display(p->rchild, level+1);
	printf("\n");

	for(i=0; i<level; i++)
		printf(" ");

	printf("%c", p->info);
	display(p->lchild, level+1);

}



void inorder(struct node *p)
{
	if (p == NULL)
		return;
	inorder(p->lchild);
	printf("%c ",p->info);
	inorder(p->rchild);
};


void preorder(struct node *p)
{
	if (p == NULL)
			return;
	printf("%c ",p->info);
	preorder(p->lchild);
	preorder(p->rchild);

};

void postorder(struct node *p)
{
	if (p == NULL)
		return;
	postorder(p->lchild);
	postorder(p->rchild);
	printf("%c ",p->info);

};

int height(struct node *p)
{
	int hL, hR;

	if(p == NULL)
	   return 0;

	hL = height(p->lchild);
	hR = height(p->rchild);


	if(hL > hR)
		return 1 + hL;
	else
		return 1 + hR;

}
