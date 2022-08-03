#include<stdio.h>
int main()
{
    int a[10], n,i,x;
    int first,last,mid;
    
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    first = 0;
    last = n-1;
    mid = (first+last)/2;
     printf("%d",mid);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search:\n");
    scanf("%d",&x);
    
   
    while (first <= last) {
    if (a[mid] < x)
      first = mid + 1;
    else if (a[mid] == x) {
      printf("%d found at location %d.\n",x, mid+1);
      break;
    }
    else
      last = mid - 1;
      mid = (first + last)/2;
   }
   if (first > last)
      printf("%d Not found!\n",x);
   
    return 0;
}




#include<stdio.h>
void binary_search(int a[10],int n,int x)
{
    int first,last,mid;
    first = 0;
    last = n-1;
    mid = (first+last)/2;
    while (first <= last) 
    {
    if (a[mid] < x)
      first = mid + 1;
    else if (a[mid] == x) {
      printf("%d found at location %d.\n",x, mid+1);
      break;
    }
    else
      last = mid - 1;
      mid = (first + last)/2;
   }
   if (first > last)
      printf("%d Not found!\n",x);
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
    
    binary_search(a,n,x);
    return 0;
}