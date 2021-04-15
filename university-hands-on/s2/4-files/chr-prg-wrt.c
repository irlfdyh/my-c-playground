#include <stdio.h>
#include <stdlib.h>

int main()
{
   char c;
   FILE *fptr;

   fptr = fopen("fls/coba.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

    while ((c = getchar()) != '\n')
    {
        fputc(c,fptr);
    }
  
   fclose(fptr);

   return 0;
}