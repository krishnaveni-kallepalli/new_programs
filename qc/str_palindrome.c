#include<stdio.h>
#include<string.h>
int palindrome(char *p)
{
	int i,j,temp,flag=0;
	for(i=0,j=strlen(p)-1;i<j;i++,j--)
	{
		if(*(p+i)==*(p+j))
		continue;
		else
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	char str[10];
	char *p;
	p=str;
	printf("Enter sstring\n");
	scanf("%s",str);
	int (*fp)(char s[])=palindrome;
	if(fp(str)==0)
		printf("%s is palindrome\n",str);
	else
		printf("%s is not palindrome\n",str);
	return 0;
}
