#include<stdio.h>
#include<string.h>
int str_ncopy(char d[10],char s[10],int n)
{
	int i=0;
	while(s[i]!='\0' && i<n)
	{
		d[i] = s[i];
		i++;
	}
	d[i]='\0';
}

int main()
{
	int n;
	char s[10],d[10]="krishna";
	int i=0;
	printf("Enter string:\n");
	scanf("%s",s);
	int (*fp)(char d[10],char s[10],int n)=str_ncopy;
	fp(d,s,3);
	printf("%s\n",d);
	return 0;
}
