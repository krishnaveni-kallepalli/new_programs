#include<stdio.h>
#define n 5
void reversal(int *p)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
	    temp=*(p+i);
	    *(p+i)=*(p+n-i-1);
	    *(p+n-i-1)=temp;
	}
    	for(i=0;i<n;i++)
    	    printf("%d\t",*(p+i));
    	printf("\n");
}

int main()
{
	int arr[n],i,temp;
	int *p;
	p=arr;
	void (*rev)(int *p)=reversal;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	rev(p);
}
