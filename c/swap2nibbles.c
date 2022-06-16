//swapping two nibbles of a byte

#include<stdio.h>
unsigned char swapNibbles(unsigned char x)
{
    return ( (x & 0x0F)<<4 | (x & 0xF0)>>4 );
}
 
int main()
{
    unsigned char x;
    scanf("%u",&x);
    printf("%u\n",swapNibbles(x));
    return 0;
}
