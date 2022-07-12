#include<stdio.h>
int main()
{
	int i=0;
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int *p;
	p=a;
	
	for(i=0;i<n;i++)
		printf("%d\n",*(p+i));
		
	int i=0;
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int (*p)[5];
	p=&a;
	for(i=0;i<n;i++)
		printf("%d\n",*(p+i));

}
	
