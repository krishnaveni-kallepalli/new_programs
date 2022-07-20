#include<stdio.h>
int str_length(char str[10])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char str[10];
	int i=0;
	printf("Enter string:\n");
	scanf("%s",str);
	int (*fp)(char str[10])=str_length;
	i=fp(str);
	printf("Length of string is:%d\n",i);
	return 0;
}
