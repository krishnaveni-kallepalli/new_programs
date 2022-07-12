#include<stdio.h>
void diagonal(int a[5][5])
{
    int i,j;
    for(i=0;i<5;i++)
    {
                for(j=0;j<5;j++)
                {

                    if(i==j)
                        printf("%d", a[i][j]); 
                    else
                        printf("\t");
                }
    }
        printf("\nNot a Square Matrix.");
}
int main()
{
	int a[5][5];
	int i,j;
	printf("\nEnter elements:\n");
	for (i=0;i<5;i++)
        {
            for (j=0;j<5;j++)
            {
                 scanf("%d", &a[i][j]);
            }
        }
        void (*fp)(int *a[5][5])=diagonal;
        fp(a);
        return 0;
       

}
