#include<stdio.h>

int main()
{
	int *i, *j;
	i = 0x12345678;
	j = 0x11111111;
	j++;
	printf("%d\n%d\n",*i,j);

}
