#include<stdio.h>
int main()
{
	int i,j,n=5,a=1;
	 for(i=1;i<=n;i++)
	 {
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
				printf("%d ",a);
			else
				printf("* ");
		}
		if(i%2 != 0)
			a++;
		printf("\n");
	}
	return 0;
}
