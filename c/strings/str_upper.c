#include<stdio.h>
int str_upper(char s[10])
{
	int i = 0;
	while(s[i]!='\0')
  	{
  		if(s[i]>='a' && s[i]<='z')
  		{
  			s[i] = s[i]-32;
		}
		i++;
  	}
	
}

int main()
{
	char s[10]="krishna";
	int i=0;
	//printf("Enter string:\n");s
	//scanf("%s",s);
	int (*fp)(char s[10])=str_upper;
	fp(s);
	printf("%s\n",s);
	return 0;
}
