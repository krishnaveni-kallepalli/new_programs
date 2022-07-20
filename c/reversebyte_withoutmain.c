#include<stdio.h>
#define withoutmain main
int reversebyte(int n)
{
	int result;
	result = ((0x000000ff & n)<<24)|((0x0000ff00 & n)<<8)|((0x00ff0000 & n)>>8)|((0xff000000 & n)>>24);
	return result;
}
int withoutmain()
{
	int n,result;
	printf("Enter Hexadecimal number:\n");
	scanf("%x",&n);
	printf("Entered number :0x%x\n",n);
	int (*fp)(int n)=reversebyte;
	result=fp(n);
	printf("After reversing :0x%x\n",result);
	return 0;
}
