/**********************************************************************
 * Write and keep a program that saves a data of information of the vacunes
 in numbers
* Samuel Castro Echeverria*
 * Universidad Politecnica de Yucatan*
 **********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[3]; 
    int i,n=0; 
    FILE*fichero;
    fichero = fopen("vacunas.txt","wt"); 
    printf("Personas a registrar?\n");
    scanf("%d",&n); 
    for (int k=1;k<=n;k++){ 
    for(i=0; i<2; i++){ 
        printf("Ingresa los datos de la persona %d (edad y mes de nacimiento):\n",k);
        scanf("%d", &num[i]);
    }
    fprintf(fichero, "Persona 1 %d\n",k); 
    fprintf(fichero, "Edad: %d años\n",num[0]);
    fprintf(fichero, "Mes de nacimiento: %d\n",num[1]);
    }
    fclose(fichero);
    printf("Proceso completo"); 
    
    return 0;
}
