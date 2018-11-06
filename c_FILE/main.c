#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nombre[51];
    int edad;
}persona;

int main()
{
    int respuesta=1;
    int numeroModificar;
    char auxiliarNombre[31];

    int listSize=2;
    Persona* personas=(Persona*)malloc(sizeof(Persona)listSIze);

    FILE  *bin;

        int cant;

   if ((bin=fopen(ARCH,"rb+"))==NULL){
      if ((bin=fopen(ARCH,"wb+"))==NULL){
         printf("No se pudo abrir el archivo");
         exit(1);
      }
   }

    return 0;
}
