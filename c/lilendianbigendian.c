#include<stdio.h>
int main()
{
	int i = 0x98765432;
	char *p;
	p=(char *)&i;//character pointer points to first address i.e lower order address : 32
	printf("%p\n",p-1);
	printf("%x\n",*(p-1));
	
	printf("%p\n",p);
	printf("%x\n",*p);
	
	printf("%p\n",p+1);
	printf("%x\n",*(p+1));
	
	if(*p)
		printf("little endian\n");
	else
		printf("Big endian\n");
}
