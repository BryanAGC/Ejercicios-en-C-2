#include <stdio.h>
#include <string.h>

struct DEPORTISTA {
    char deporte[50];
    char sexo[50];
    float numMedallas;
    char pais[50];
    char nombre[50];
};

int main() {
    struct DEPORTISTA deportistas[10];
    int i, masMedallas = 0;

    for (i = 0; i < 10; i++) {
        printf("Ingrese el nombre del Deporte %d: ", i + 1);
        scanf("%s", deportistas[i].deporte);
         printf("Ingrese el pais del deportista %d: ", i + 1);
        scanf("%s", deportistas[i].pais);
        printf("Ingrese el numero de medallas %d: ", i + 1);
        scanf("%f", &deportistas[i].numMedallas);
        printf("Ingrese el nombre del deportista %d: ", i + 1);
        scanf("%s", deportistas[i].nombre);

    }

    for (i = 1; i < 10; i++) {
        if (deportistas[i].numMedallas > deportistas[masMedallas].numMedallas) {
            masMedallas = i;
        }
    }

    printf("\nDatos de los empleados:\n");
    for (i = 0; i < 10; i++) {
        printf("Deportista %d:\n", i + 1);
        printf("Pais: %s\n", deportistas[i].deporte);
        printf("Pais: %s\n", deportistas[i].pais);
        printf("Numero de Medallas: %.2f\n", deportistas[i].numMedallas);
        printf("Pais: %s\n", deportistas[i].sexo);
    }
    printf("\nEl empleado con el mayor sueldo es:\n");
    printf("Deporte: %s\t", deportistas[masMedallas].deporte);
    printf("Pais: %s\t", deportistas[masMedallas].pais);
    printf("Numero Medallas: %.2f\t", deportistas[masMedallas].numMedallas);
    printf("Nombre: %s\t", deportistas[masMedallas].nombre);

    return 0;
}