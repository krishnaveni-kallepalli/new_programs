#include<stdio.h>
int main()
{
	/*1D Array
	int i=0;
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int *p;
	p=a;
	
	for(i=0;i<n;i++)
		printf("%d\n",*(p+i));
	*/
		
	int i=0,j=0;
	int a[2][2]={1,2,3,4};
	int n=sizeof(a)/sizeof(a[0]);
	int (*p)[2];
	p=a;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\n",*(*(p+i)+j));
	}
}
	
