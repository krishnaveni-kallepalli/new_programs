#include <stdio.h>

int main()
{
   char *p = "hello";// this will work fine
   p[1]=1; // it gives runtime error
   
   printf("%s\n",p);

   return 0;
}
