#include <stdio.h>
#include <stdlib.h>


void display();
void add_end();
void add_beginning();
struct node
{
	int data;
	struct node*next;
};
struct node*start=NULL;

int main()
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	start=newnode;
	newnode->data=20;
	newnode->next=NULL;
	add_end(30);
	add_beginning(50);
    add_end(40);
	display();
	
	return 0;
}

void display()
{
	struct node*temp=start;
	while(temp!=NULL)
	{
	printf("data %d selfadder %d nextadder %d\n",temp->data,temp,temp->next);
	temp=temp->next;
	}
}

void add_end(int info)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	struct node*temp=start;
	
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=newnode;
	newnode->data=info;
	newnode->next=NULL;
	
}

void add_beginning(int info)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=start;
	start=newnode;
	newnode->data=info;
}

