#include <stdio.h>
enum value {x=1,y=0,z=0};
 
int main()
{
   enum value val;
   for(val=0;val<3;val++)
      printf("%d\n",val);
   return 0;
}
