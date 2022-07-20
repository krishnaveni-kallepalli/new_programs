#include<stdio.h>
#include<string.h>
int str_copy(char d[10],char s[10])
{
	int i=0;
	while(s[i]!='\0')
	{
		d[i] = s[i];
		i++;
	}
	printf("%ld\n",strlen(d));
	d[i]='\0';
	printf("%ld\n",strlen(d));
}

int main()
{
	char s[10],d[10]="krishna";
	int i=0;
	printf("Enter string:\n");
	scanf("%s",s);
	int (*fp)(char d[10],char s[10])=str_copy;
	fp(d,s);
	printf("%s\n",d);
	return 0;
}
