#include<stdio.h>
void bubble(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
	}
}
int main()
{
	int i,j,a[5],n;
	void (*fp)(int a[],int n)=bubble;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	fp(a,n);
	printf("After sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
