#include <stdio.h>
int main()
{
    int a,b,i=0;
    printf("Enter a,b:\n");
    scanf("%d %d:",&a,&b);
    int j = 0,count = 0;
    while (j<31)
    {
       if (a & 0x1<<i ^ b & 0x1<<i) 
       {
           if (b&0x1<<i)
           {
                a = a | 0x1<<i;
                count++;
           }
            else
            {
                a = a & ~(0x1<<i);
                count++;
            }
       }
       i++;
       j++;
    }
    printf ("A:%d,change bit:%d\n",a,count);
    return 0;
}
