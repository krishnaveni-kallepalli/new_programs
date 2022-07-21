#include<stdio.h>
int str_ncompare(char s1[10],char s2[10],int n)
{
	int i=0,flag=0;
	while(s1[i] == s2[i] && s1[i]!='\0' && s2[i]!='\0' && i<n)
	{
		i++;
	}
	/*if(s1[i]>s2[i])
		printf("s1 is greater\n");
	else if(s2[i]>s1[i])
		printf("s2 is greater\n");
		*/
	if(s1[i]!=s2[i])
		printf("Both are different\n");
	else
		printf("both are same\n");
}


int main()
{
	char s1[10],s2[10];
	int i=0,n;
	printf("Enter string1:\n");
	scanf("%s",s1);
	printf("Enter string2:\n");
	scanf("%s",s2);
	int (*fp)(char s1[10],char s2[10],int n)=str_ncompare;
	fp(s1,s2,3);
	return 0;
}
