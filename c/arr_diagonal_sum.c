#include<stdio.h>
int main()
{
	int arr[50][50];
	int r,c,i,j;
	int sum;
	printf("Enter no of rows,cols:\n");
	scanf("%d %d",&r,&c);
	
	printf("Enter elements\n");
	for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	        scanf("%d",&arr[i][j]);
	printf("Sum of diagonal elements:\n");
	for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	       if(i==j)
	       	   sum+=arr[i][j];
	printf("%d\n",sum);
}
