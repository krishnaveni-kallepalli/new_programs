#include <stdio.h>

int main()
{
	unsigned char a[100];
	int i,n;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
	printf("Enter hexadecimal nums\n:");
	for(i=0;i<n;i++)
	{
	scanf(" %u",a);
	}
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%02X : %03d)\n",a[i],a[i]);
	}
	return 0;	
}
