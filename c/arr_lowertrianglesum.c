#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
    int arr[ROWS][COLS];
    int row, col, sum = 0;

    printf("Enter elements in matrix of size %dx%d: \n",ROWS,COLS);
    for(row=0;row<ROWS;row++)
        for(col=0;col<COLS;col++)
            scanf("%d",&arr[row][col]);
      
    printf("Sum of lower triangular matrix\n");
 
    for(row=0;row<ROWS;row++)
        for(col=0;col<COLS;col++)
              if(col<row)
                  sum += arr[row][col];
            
    printf("%d\n", sum);

    return 0;
}
