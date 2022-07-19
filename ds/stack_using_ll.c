#include<stdio.h>
#include<stdlib.h>
struct node 
{
	 int data;
	 struct node *link;
}*top=NULL;

void push(int data)
{
	struct node *new;//creating newnode
	new = malloc(sizeof(new));//allocating memory
	if(new == NULL)//check if memory allocated or not
	{
		printf("Stack overflow\n");
		exit(0);
	}
	new->data = data;
	new->link = NULL;
	new->link = top;//putting address of 1st node in link of newnode
	top = new;//update top pointer and make it point to newnode
}
int pop()
{
	struct node *temp;
	temp = top;//update temp pointer 
	if(temp == NULL)
	{
		printf("Stack is empty\nstack underflow\n");
		exit(0);
	}
	int val;
	val = temp->data;//store value of 1st node before deleting
	top = top->link;//update top so that it points to next node
	free(temp);//delete node
	temp=NULL;//update temp to null
	return val;//return value of 1st node
}
void display()
{
	struct node *temp;
	temp = top;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->link;
	}
}
int main()
{
	int ch,data;
	while(1)
	{
		printf("Enter choice:\n1.push\n2.pop\n3.display\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter data:\n");
				scanf("%d",&data);
				push(data);
				break;
			case 2: pop();
				printf("Deleted element is:%d\n",data);
				break;
			case 3: printf("Elements in stack :\n");
				display();
				break;
			case 4: exit(0);
			default:printf("Wrong choice\n");
				break;
		}
	}
}
