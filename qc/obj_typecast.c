#include<stdio.h>

int main()
{
	int a;
	char *x;
	x = (char *) &a;
	a = 512;   // 00000000  00000000  00000010 00000000    int = 4bytes = 32 bits.
		  //  4th byte  3rd byte  2nd byte  1st byte

	x[0] = 1;	// we are modifying 1st bit of the 1st byte
			// 00000000 00000000 00000010 00000001 = 513
	x[1] = 2;	// we are modifying 1st bit of the 2nd byte
			// 00000000 00000000 00000010 00000001 = 513

	printf("x[0]=%p\n",&x[0]);
	printf("x[1]=%p\n",&x[1]);
	printf("x[2]=%p\n",&x[2]);
	printf("x[3]=%p\n",&x[3]);
	printf("%d\n",a);
	return 0;	
}

