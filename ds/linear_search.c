#include<stdio.h>
int main()
{
    int a[10], n,i,x;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search:\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d is found at %d pos",x,i+1);
        }
    }
    if (i == n)
    printf("%d isn't present in the array.\n",x);
    return 0;
}




#include<stdio.h>
void linear_search(int a[10],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d is found at %d pos",x,i+1);
            break;
        }
    }
    if (i == n)
    {
         printf("%d not there in the array.\n",x);
    }
}
int main()
{
    int a[10], n,i,x;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search:\n");
    scanf("%d",&x);
    linear_search(a,n,x);
    return 0;
}