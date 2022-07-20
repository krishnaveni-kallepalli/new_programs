#include<stdio.h>
int str_concatenate(char s1[50],char s2[50])
{
	int i=0,j=0,flag=0,n;
	while(s1[i]!='\0')
		i++;
		while(s2[j]!='\0')
		{
			s1[i]=s2[j];
			j++;
			i++;
		}
	s1[i]='\0';
}


int main()
{
	char s1[50],s2[50];
	int i=0;
	printf("Enter string1:\n");
	scanf("%s",s1);
	printf("Enter string2:\n");
	scanf("%s",s2);
	int (*fp)(char s1[50],char s2[50])=str_concatenate;
	fp(s1,s2);
	printf("%s\n",s1);
	return 0;
}
