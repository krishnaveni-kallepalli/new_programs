#include<stdio.h>
int unique(int a[100],int N)
{
	int i,j,count=1;
	for(i=0;i<N;i++)
	{
	    for(j=0;j<N;j++)
	    {
	        if(a[i]==a[j] && i!=j)
	            break;
	    }
	    if(j==N)
	    {
		     printf("unique elements is %d\n",a[i]);
		     ++count;
	    }
	}
	
	return -1;
}
int unique1(int *ptr,int N)
{
	int i,j,count=1;
	for(i=0;i<N;i++)
	{
	    for(j=0;j<N;j++)
	    {
	        if((*(ptr+i)==*(ptr+j)) && i!=j)
	            break;
	    }
	    if(j==N)
	    {
		     printf("Unique elements is %d\n",*(ptr+i));
		     ++count;
	    }
	}
	
	return -1;
}
int main()
{
	int a[100],i,N;
	int (*fp)(int *a,int N)=unique1;
	printf("Enter no of elements:");
	scanf("%d",&N);
	printf("Enter elements in array:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	unique(a,N);
	int *ptr;
	ptr=a;
	fp(ptr,N);
	return 0;
}
