#include<stdio.h>
void insertion(int a[],int i,int j,int n)
{
	int temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
int main()
{
	int i,j,a[5],n;
	void (*fp)(int a[],int i,int j,int n)=insertion;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	fp(a,i,j,n);
	printf("After sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
