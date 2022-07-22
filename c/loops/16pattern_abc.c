#include<stdio.h>
int main()
{
	  int k;
	  for(int i=1;i<6;i++)
	  {
	         k=102;
		 for(int j=0;j<i;j++)
		 {
		    k=k-1;
		    printf("%c ",k);
		 }
		 printf("\n");
	 }
	 return 0;
}
