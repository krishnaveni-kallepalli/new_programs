#include<stdio.h>
void frequency(int *p,int b[])
{
	int i,j,n,count=0;
	b[i]=-1;
	for(i=0;i<n;i++)
		{
			count=1;
			for(j=i+1;j<n;j++)
			{
				if(*(p+i)==*(p+j))
				{
					count++;
					b[j]=0;
				}
			}
			if(b[i]!=0)
				b[i]=count;
		}
		printf("Count frequency of element in an array: \n");
		for(i=0;i<n;i++)
		{
			if(b[i]!=0)
				printf("frequency of %d: %d times\n",*(p+i),b[i]);
		}
}
int main()
{
	int a[10],b[10],i,j,n,*p;
	p=a;
	void (*fp)(int a[],int b[])=frequency;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	fp(p,b);
	return 0;
}
