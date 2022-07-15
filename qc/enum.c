#include<stdio.h>
 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
 
int main()
{
    enum week day;
    int i;
    for(day=0;day<7;day++)
    {
    	printf("%d",day);
    }
    return 0;
}
