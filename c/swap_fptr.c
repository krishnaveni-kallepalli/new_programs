#include<stdio.h>

void swap_ptr(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void swap_xor(int *x,int *y)
{
	*x=*x^*y;
	*y=*x^*y;
	*x=*x^*y;
}

int main()
{
int a,b;
printf("Enter a and b value:\n");
scanf("%d %d",&a,&b);

void (*fp[2])(int *,int *)={swap_ptr,swap_xor}; 

(*fp[0])(&a,&b);
printf("swap using pointer = %d %d\n",a,b);

(*fp[1])(&a,&b);
printf("swap using xor operator = %d %d\n",a,b);

return 0;
}

