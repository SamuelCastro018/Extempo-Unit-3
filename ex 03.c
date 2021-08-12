/**********************************************************************
 * Write a text, but if you put "end", that will close the program an save te content.
* Samuel Castro Echeverria*
 * Universidad Politecnica de Yucatan*
 **********************************************************************/
#include <stdio.h>
#include <string.h>
 
int main()
{
   FILE* ptFichero;
   char fin[]="end";  
   char frase[60];
   ptFichero = fopen("Values.txt", "wt");
   do
   {
      puts("write a string:\n(or end if you want save ans exit). \n");
      gets(frase);
      if (strcmp(frase, fin) == 0)
         break;
      fprintf(ptFichero, "%s\n", frase);
   }
   while (strcmp(frase, fin) != 0);
      
   fclose(ptFichero);
   return 0;
}
