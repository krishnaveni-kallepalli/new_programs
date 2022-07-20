#include<stdio.h>
#define result(n) ((0x000000ff & n)<<24)|((0x0000ff00 & n)<<8)|((0x00ff0000 & n)>>8)|((0xff000000 & n)>>24)
int main()
{
	int n,result;
	printf("Enter Hexadecimal number:\n");
	scanf("%x",&n);
	printf("Entered number :%x\n",n);
	printf("After reversing :%x\n",result(n));
	return 0;
}
