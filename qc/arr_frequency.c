#include<stdio.h>
void frequency(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			int count=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count++;
					a[j]=-1;
				}
			}
			printf("%d frequency is %d\n",a[i],count);
		}
	}
}
void frequency1(int *ptr,int n)
{
	for(int i=0;i<n;i++)
	{
		if(*(ptr+i)>0)
		{
			int count=1;
			for(int j=i+1;j<n;j++)
			{
				if(*(ptr+i)==*(ptr+j))
				{
					count++;
					*(ptr+j)=-1;
				}
			}
			printf("%d Frequency is %d\n",*(ptr+i),count);
		}
	}
}
int main()
{
	int a[10],n;
	printf("Enter no of Elements\n");
	scanf("%d",&n);
	printf("Enter the elements of Array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	void (*fp)(int a[],int n)=frequency;
	fp(a,n);
	int *ptr;
	ptr=a;
	void (*fp1)(int *ptr,int n)=frequency1;
	fp1(ptr,n);
	return 0;
}
