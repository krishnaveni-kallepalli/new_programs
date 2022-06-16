#include <stdio.h>

int main()
{   
    const int a=10;    
    int *p;             
    p=&a;             
    printf("Before changing : %d\n",a);
 
    *p=20;
     
    printf("After  changing : %d\n",a); 
    printf("Value changed\n");
     
    return 0;
}
