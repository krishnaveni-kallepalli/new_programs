#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int a[SIZE];
int top = -1;
void push(int data)
{
	if(top == SIZE - 1)
	{
		printf("Stack overflow\n");
		exit(1);
	}
	top = top+1;
	a[top] = data;
}
int pop()
{
	int val;
	if(top == -1)
	{
		printf("Stack underflow\n");
		exit(1);
	}
	val = a[top];
	top = top-1;
	return val;
}
void display()
{
	int i;
	if(top == -1)
	{
		printf("Stack underflow\n");
		return;
	}
	for(i=top;i>=0;i--)
		printf("%d\n",a[i]);
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
