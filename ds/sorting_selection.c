#include<stdio.h>
void selection(int a[],int n)
{
	int temp,i,j,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
int main()
{
	int i,j,a[5],n;
	void (*fp)(int a[],int n)=selection;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	fp(a,n);
	printf("After sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
