#include <stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    char *p;
    int  c1=0,c2=0;

    printf("Enter any string: ");
    scanf("%[^\n]s",str);

    p=str;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            c1++;
        else
            c2++;
       
        p++;
    }

    printf("Number of Vowels : %d\n",c1);
    printf("Number of Consonants : %d\n ",c2);
    return 0;
}
