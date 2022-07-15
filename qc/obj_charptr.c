#include<stdio.h>


int main()
{
	char *p = "hello";
	char ptr[] = "hello";

	p = "world";	// it works fine 
	ptr = "world"; // it gives compilation error because we can't change base address of an array

	printf("%s\n",p);
	printf("%s\n",ptr);
}
