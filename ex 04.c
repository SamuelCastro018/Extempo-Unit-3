  
/**********************************************************************
 *A program that asks for a filename and displays the content of that file on the screen.
 *file, pausing after every 25 lines, to give it time to read it. When the user press enter, the next 25 lines will be displayed,    
 *And so on until the file is finished.
 * Samuel Castro Echeverria*
 * Universidad Politecnica de Yucatan*
 **********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    FILE *fichero;
    char linea[100], nombre[40];
    int i=0;
   do
   {
      printf("\nNombre de fichero: ");
      gets(nombre);
   
      fichero = fopen(nombre, "rt");
   
      if (fichero == NULL)
      {
          printf("No existe el fichero\n\n");
          i++;
          if (i == 5)
             exit(1);
      } 
    }
    while (fichero == NULL);
    while (!feof(fichero))
    {
        for (i=0; i<25; i++){
            fgets(linea, 100, fichero);
            if (!feof(fichero))
            {
                puts(linea);                
            }
    }
    getchar();       
    }
        printf("\n press enter in order to get out the program\n");
    fclose(fichero);
    return 0;
}
