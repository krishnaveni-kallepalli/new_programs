#include<stdio.h>
#include<stdlib.h>
struct dll{
	int data;
	struct dll *prev,*link;
};
void display(struct dll *ptr)
{
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
	}
}
struct dll* add_last(struct dll *ptr)
{
	struct dll *newnode=NULL,*temp=NULL;
	newnode=malloc(sizeof(struct dll));
	if(newnode==NULL)
	{
		printf("node not created:\n");
	}
	else
	{
		printf("enter the data:\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		newnode->prev=NULL;
		if(ptr==NULL)
		{
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
			newnode->prev=temp;
		}
	}
	return ptr;
}
int main()
{
	int choice;
	struct dll *head=NULL;
	while(1)
	{
		printf("1.add_last\t2.display\t3.exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_last(head);
			       break;
			case 2:display(head);
			       break;
			case 3:exit(0);
		}
	}
}
