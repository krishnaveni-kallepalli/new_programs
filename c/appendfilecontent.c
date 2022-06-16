#include <stdio.h>
#include <stdlib.h> 
int main()
{
      FILE *fp1, *fp2;
      char f1[50],f2[50],c;
      printf("Enter filename to open for reading : \n ");
      scanf("%s", f1);
    
      fp1 = fopen(f1,"r");
      if (fp1 == NULL)
     {
            printf("%s file not exist\n", f1);
            exit(0);
      }
      printf("Enter filename to append the content : \n");
      scanf("%s", f2);
     
      fp2 = fopen(f2, "a");
      if (fp2 == NULL)
      {
            printf("%s file not exist\n", f2);
            exit(0);
      }
      // Read content from file
      c = fgetc(fp1);
      while (c != EOF)
      {
            fputc(c,fp2);
            c = fgetc(fp1);
      }
      printf("Content  %s is appended to %s\n", f1,f2);
      fclose(fp1);
      fclose(fp2);
      return 0;
}
