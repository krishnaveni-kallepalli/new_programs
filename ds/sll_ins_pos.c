#include<stdio.h>
#include<stdlib.h>
struct sll{
	int data;
	struct sll *link;
};
struct sll* add(struct sll *ptr)
{
	struct sll *newnode=NULL,*temp=NULL;
	newnode=malloc(sizeof(struct sll));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter the data:\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
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
		}
	}
	return ptr;
}
void display(struct sll *ptr)
{
	struct sll *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		while(temp)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}
int count_node(struct sll *ptr)
{
	int count=0;
	if(ptr==NULL)
	{
		printf("list is empty\n");
		return 0;
	}
	else
	{
		while(ptr)
		{
			count++;
			ptr=ptr->link;
		}
	}
	return count;
}
struct sll* add_nth_position(struct sll *ptr,int count)
{
	struct sll *newnode=NULL,*temp=NULL,*prev;
	int position,i;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		printf("enter the position to add the list:\n");
		scanf("%d",&position);
		if(position > count)
		{
			printf("invalid choice\n");
		}
		else
		{
			temp=ptr;
			for(i=1;i<position-1;i++)
			{
				temp=temp->link;
			}
			newnode=malloc(sizeof(struct sll));
			if(newnode==NULL)
			{
				printf("memory is not allocated\n");
			}
			else
			{
				printf("enter the data\n");
				scanf("%d",&newnode->data);
				newnode->link=NULL;
				newnode->link=temp->link;
				temp->link=newnode;
			}
		}
	}
	return ptr;
}
int main()
{
	struct sll *head=NULL;
	int choice,c;
	while(1)
	{
		printf("1.add\t2.display\t3.count\t4.add_nth_position\t5.exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add(head);
			       break;
			case 2:display(head);
			       break;
			case 3:c=count_node(head);
			       printf("counts the nodes in sll:%d\n",c);
			       break;
			case 4:head=add_nth_position(head,c);
			       break;
			case 5:exit(0);
		}
	}
}
