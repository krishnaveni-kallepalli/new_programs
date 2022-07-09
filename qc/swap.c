#include<stdio.h>
void swap1(int *a,int *b)
{
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
}
void swap2(int a,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
}
void swap3(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Before swapping:%d %d\n",a,b);
	swap1(&a,&b);
	printf("After swapping:%d %d\n",a,b);
	swap2(a,b);
	printf("After swapping:%d %d\n",a,b);
	swap3(a,b);
	printf("After swapping:%d %d\n",a,b);
	printf("After swapping:%d %d\n",a,b);
	
}
