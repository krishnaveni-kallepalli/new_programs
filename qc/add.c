#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int a=10,b=20;	
	int (*fp)(int,int);
	fp=add;
	fp(a,b);
	printf("%d %d",a,b);
	return 0;
}
