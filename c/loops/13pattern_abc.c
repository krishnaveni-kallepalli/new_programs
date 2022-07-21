#include<stdio.h>
int main()
{
	int i,j,n=5;
	char c='e';	;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%c",c);
		}
		c--;
		printf("\n");
	}
	return 0;
}
