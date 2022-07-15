#include<stdio.h>

int main()
{
	char *p = "hello";
	char ptr[] = "hello";
		
	p = "world";	// it will work
	ptr = "world"; // it gives compilation error

return 0;
}
