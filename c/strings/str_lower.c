#include<stdio.h>
int str_lower(char s[10])
{
	int i = 0;
	while(s[i]!='\0')
  	{
  		if(s[i]>='A' && s[i]<='Z')
  		{
  			s[i] = s[i]+32;
		}
		i++;
  	}
	
}

int main()
{
	char s[10]="KRISHNA";
	int i=0;
	//printf("Enter string:\n");s
	//scanf("%s",s);
	int (*fp)(char s[10])=str_lower;
	fp(s);
	printf("%s\n",s);
	return 0;
}
