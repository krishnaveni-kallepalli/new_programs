#include<stdio.h>
void str_char(char s[10],char ch)
{
	int i = 0,flags;
	for(i=0;s[i]!='\0';i++)
  	{
  		if(s[i]==ch)
  			printf("found at position:%d\n",i+1);
  		else
  			printf("not found\n");
  			break;
  	}
}

int main()
{
	char s[10],ch;
	int i=0,flag=0;
	printf("Enter string:\n");
	scanf("%s",s);
	printf("Enter character to search:\n");
	scanf(" %c",&ch);
	void (*fp)(char s[10],char ch)=str_char;
	fp(s,ch);
	
	return 0;
}
