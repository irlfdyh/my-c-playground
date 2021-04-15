#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, i = 0;
   char anw;
   FILE *fl;

   // use appropriate location if you are using MacOS or Linux
   fl = fopen("fls/int-data.dat","wb");

   if(fl == NULL)
   {
      printf("File gagal diciptakan!");   
      exit(1);             
   }

   do
   {
      printf("Enter num: ");
      scanf("%d",&num);
      putw(num, fl);

      printf("ada data lagi? ");
      scanf(" %c", &anw);

   } while (anw == 'y' || anw == 'Y');

   fclose(fl);

   return 0;
}