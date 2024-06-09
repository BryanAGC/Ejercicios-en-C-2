#include <stdio.h>
#include <string.h>

struct Empleado {
    char nombre[50];
    char sexo[50];
    float sueldo;
};

int main() {
    struct Empleado empleados[5];
    int i, indiceMayorSueldo = 0;

    for (i = 0; i < 5; i++) {
        printf("Ingrese el nombre del empleado %d: ", i + 1);
        scanf("%s", empleados[i].nombre);
        printf("Ingrese el sueldo del empleado %d: ", i + 1);
        scanf("%f", &empleados[i].sueldo);
        printf("Ingrese el sexo del empleado %d: ", i + 1);
        scanf("%s", empleados[i].sexo);
    }

    for (i = 1; i < 5; i++) {
        if (empleados[i].sueldo > empleados[indiceMayorSueldo].sueldo) {
            indiceMayorSueldo = i;
        }
    }

    printf("\nDatos de los empleados:\n");
    for (i = 0; i < 5; i++) {
        printf("Empleado %d:\n", i + 1);
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Sueldo: %.2f\n", empleados[i].sueldo);
        printf("Nombre: %s\n", empleados[i].sexo);
    }
    printf("\nEl empleado con el mayor sueldo es:\n");
    printf("Nombre: %s\t", empleados[indiceMayorSueldo].nombre);
    printf("Sueldo: %.2f\t", empleados[indiceMayorSueldo].sueldo);
    printf("Sexo: %s\t", empleados[indiceMayorSueldo].sexo);

    return 0;
}
