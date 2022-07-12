#include<stdio.h>
#include<stdlib.h>
typedef struct dll
{
	struct dll *prev;
	int data;
	struct dll *next;
}node;

node *first=NULL;
node *last=NULL;
void create(int ele)
	{
		node*ptr=(node*)malloc(sizeof(node));
		ptr->data=ele;
		ptr->prev=NULL;
		ptr->next=NULL;
		if(first==NULL)
		{
			first=ptr;
			last=ptr;
		}
		else
		{  
			ptr->prev=last;
			last->next=ptr;
			last=ptr;
		}	
	}

void display()
{
	node *temp=first;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void display_rev()
{
	node *temp=last;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->prev;
	}
	free(temp);
}

void insert_front(int ele)
{
	node *ptr=(node*)malloc(sizeof(node));
	ptr->data=ele;
	ptr->prev=first->prev;
	ptr->next=first;
	first->prev=ptr;
	first=ptr;
}
void insert_last(int ele)
{
	node *ptr=(node*)malloc(sizeof(node));
	ptr->data=ele;
	ptr->next=last->next;
	ptr->prev=last;
	last->next=ptr;
	last=ptr;
}

void delete_front()
{
	node *temp=first;
	first=temp->next;
	first->prev=NULL;
}
void delete_last()
{
	node *temp=last;
	temp=last->prev;
	temp->next=NULL;
	last=temp;
}	
int main()
{
	create (10);
	create (20);
	create (30);
	create (40);
	display();
	printf("in rev order\n");
	display_rev();
	printf("element inserted in front\n");
	insert_front(5);
	display();
	printf("element inserted in last\n");
	insert_last(50);
	display();
	printf("element deleted in front\n");
	delete_front();
	display();
	printf("element deleted in last\n");
	delete_last();
	display();
}
