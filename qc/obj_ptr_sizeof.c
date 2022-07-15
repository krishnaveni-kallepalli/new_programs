#include<stdio.h>

int main()
{
	int i = 300;//4
	float a = -200;//4
	char c = 300; //overflow in implicit constant conversion because char takes 0-256 
	char *p = "hello";
	char arr[] = "world";

	printf("%ld\n%ld\n%ld\n%ld\n",sizeof(p),sizeof(*p),sizeof(arr),sizeof(arr[0])); 
	// *p points to first char =1byte. 
	//size of arr is 6 including null chararcter
}
