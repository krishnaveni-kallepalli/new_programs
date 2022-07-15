#include<stdio.h>
#define S 7
int stack[S];

int tos=-1;

void push(int ele)
{
	if(tos == S-1)
	{
		printf("Stack is Full\n");
		return;
	}
	else
	{
		tos++;
		stack[tos]=ele;
		printf("Inserted elements are: %d\n",stack[tos]);
	}
}


void getmin()
{
	int i,min=tos;
	if(tos == -1)
	{
		printf("Stack is empty\n");
		return;
	}
	else
	{
		for(i=0;i<=tos;i++)
		{
			if(stack[i]<min)
				min=stack[i];
		}
		printf("min element is : %d\n",min);
		
	}

}

void pop()
{
	if(tos == -1)
	{
		printf("Stack is Empty\n");
		return;
	}
	else
	{
		printf("poped element is:%d\n",stack[tos]);
		tos--;
	}
	getmin(tos);
} 




void display()
{
	if(tos == -1)
	{
		printf("Stack is empty\n");
		return;
	}
	int i;
	printf("Elements in stack:\n");
	for(i=0;i<=tos;i++)
		printf("%d\n",stack[i]);
}
int main()
{
	int ele,i;
	printf("Enter elements into stack:");
	for(i=0;i<S;i++)
	{
		scanf("%d",&ele);
		push(ele);
	}
	display();
	pop();
	display();
	pop();
	display();
}

