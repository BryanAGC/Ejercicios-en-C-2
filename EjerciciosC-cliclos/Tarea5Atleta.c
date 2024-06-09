#include <stdio.h>

struct ATLETA {
    char deporte[20];
    char nombre[20];
    char pais[20];
    char numMedallas[20];
};

int main (void){
    struct ATLETA obj1;
    printf("Ingrese el Deporte\n");
    scanf("%s",&obj1.deporte);
    printf("Ingrese el Nombre del atletla: \n");
    scanf("%s",&obj1.nombre);
    printf("ingrese el Pais del atleta: \n" );
    scanf("%s",&obj1.pais);
    printf("Ingrese el Numero de medallas del atleta: \n");
    scanf("%s",&obj1.numMedallas);

printf("Deporte: %s\t",obj1.deporte);
printf("Nombre: %s\t",obj1.nombre);
printf("Pais: %s\t " ,obj1.pais);
printf("Numero de medallas %s\t",obj1.numMedallas);
   return 0;
}

