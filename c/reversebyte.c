#include<stdio.h>
int main()
{
	int n,result;
	printf("Enter Hexadecimal number:\n");
	scanf("%x",&n);
	printf("Entered number :%x\n",n);
	//result = ((0x000000ff & n)<<24)|((0x0000ff00 & n)<<8)|((0x00ff0000 & n)>>8)|((0xff000000 & n)>>24);
	result|=((0x000000ff & n)<<24);
	result|=((0x0000ff00 & n)<<8);
	result|=((0x00ff0000 & n)>>8);
	result|=((0xff000000 & n)>>24);
	printf("After reversing :%x\n",result);
	return 0;
}
