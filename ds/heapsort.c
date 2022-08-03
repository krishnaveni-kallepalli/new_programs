/*
12. Implement Heap sort 

Program:
*/
#include<stdio.h>
#include<conio.h>
int temp;
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);

void main()
{
int arr[10];
int i,n;
printf(" Enter the elements to sort: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
heapSort(arr, n);
printf(" Sorted elements are : \n");
for (i=0; i<n; ++i)
printf("%d\n",arr[i]);
}

void heapify(int arr[], int n, int i)
{
int largest = i;
int left = 2*i + 1;    
int right = 2*i + 2;    
  
if (left < n && arr[left] >arr[largest])  
largest = left;  
  
if (right < n && arr[right] > arr[largest])  
largest = right;  
  
if (largest != i)  
{  
temp = arr[i];  
    arr[i]= arr[largest];   
    arr[largest] = temp;  
heapify(arr, n, largest);  
}

void heapSort(int arr[], int n)  
{  
int i;  
for (i = n / 2 - 1; i >= 0; i--)  
heapify(arr, n, i);  
for (i=n-1; i>=0; i--)  
{  
temp = arr[0];  
    arr[0]= arr[i];   
    arr[i] = temp;  
heapify(arr, i, 0);  
}  
} 

Output:
Enter the elements to sort: 4
34
2
67
30

Sorted elements are :
2
30
34
67

