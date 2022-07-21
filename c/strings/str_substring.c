#include<stdio.h>
#include<string.h>
int str_substring(char s2[10],char s1[10])
{
	int i=0,j=0;
	while(s1[i]!='\0' && s2[j]!='\0')
	{
		if(s1[i] == s2[j])
		{
			j++;
			i++;
		}
		
	}
	s1[i]='\0';
}

int main()
{
	char s1[10],s2[10];
	int i=0;
	printf("Enter string1:\n");
	scanf("%s",s1);
	printf("Enter string2:\n");
	scanf("%s",s2);
	int (*fp)(char d[10],char s[10])=str_substring;
	fp(s2,s1);
	printf("%s\n",s1);
	return 0;
}
