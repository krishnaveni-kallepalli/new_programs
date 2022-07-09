#include<stdio.h>
#include<string.h>
#define N 10
void reversal(char s[])
{
	int i,j,temp;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
int main()
{
	char str[N];
	printf("Enter a string:\n");
	scanf("%s",str);
	void (*fp)(char[])=reversal;
	fp(str);
	printf("After Reversal:\n");
	printf("%s\n",str);
	return 0;
}
