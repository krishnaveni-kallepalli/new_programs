#include<stdio.h>
void duplicate(int N,int a[N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j])
			{
				printf("duplicate:%d\n",a[i]);
			}
		}
	}
}
void duplicate1(int N,int *ptr)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(*(ptr+i)==*(ptr+j))
			{
				printf("Duplicate:%d\n",*(ptr+i));
			}
		}
	}
}

int main()
{
	int a[100],i,N;
	void (*fp)(int N,int *ptr)=duplicate1;
	printf("Enter no of elements:");
	scanf("%d",&N);
	printf("Enter elements in array:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	duplicate(N,a);
	int *ptr;
	ptr=a;
	fp(N,ptr);
	return 0;
}
