#include<stdio.h>
int main()
{
	int x=0x98702;
	
	char *p;
	p=(char *)&x;
	
	printf("%x\n",*(p-1));
	printf("%p\n",p+1);
	
	printf("%x\n",*p);
	printf("%p\n",p);
		
	printf("%x\n",*(p+1));
	printf("%p\n",p+1);
	
	
	if(*p)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
	
}
