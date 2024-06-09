#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona {
    char nombre[50];
    char sexo[50];
    float sueldo;
};

void ingresarDatos(struct Persona *personas, int n) {
    if (n == 5) {
        return;
    }
    printf("Ingrese el nombre del empleado %d: ", n + 1);
    scanf("%s", &personas[n].nombre);
    printf("Ingrese el sexo del empleado %d: ", n + 1);
    scanf("%s", &personas[n].sexo);
    printf("Ingrese el sueldo de la persona %d: ", n + 1);
    scanf("%f", &personas[n].sueldo);
    ingresarDatos(personas, n + 1);
}

void mostrarDatos(struct Persona *personas, int n) {
    if (n == 5) {
        return;
    }
    printf("Persona %d:\n", n + 1);
    printf("Nombre: %s\n", personas[n].nombre);
    printf("Sexo: %s\n", personas[n].sexo);
    printf("Sueldo: %.2f\n", personas[n].sueldo);
    mostrarDatos(personas, n + 1);
}

float encontrarMayorSueldo(struct Persona *personas, int n, float mayorSueldo,char personano) {
    if (n == 5) {
        return mayorSueldo,personano;
    }
    if (personas[n].sueldo > mayorSueldo) {
        mayorSueldo = personas[n].sueldo;
        personano=personas[n].nombre;
    }
    return encontrarMayorSueldo(personas, n + 1, mayorSueldo, personano);
}       

int main() {
    struct Persona personas[5];
    ingresarDatos(personas, 0);
    printf("\nDatos de las personas:\n");
    mostrarDatos(personas, 0);
    float mayorSueldo = encontrarMayorSueldo(personas, 0, personas[0].sueldo);

   printf("\nLa personacon mayor sueldo  es: %.2s\n", personas[0].nombre);
    printf("\nEl sueldo mayor es: %.2f\n", mayorSueldo);
    return 0;
}
