#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona {
    char nombre[50];
    float sueldo;
    char sexo[50];
       

};
int main() {
  // int mayorS;
    struct Persona obj1[5];
    pedirDatos(obj1, 0);
    printf("\nDatos de las personas:\n");
    mostrarDatos(obj1, 0);

    float mayorSueldo = encontrarMayorSueldo(obj1, 0, obj1[0].sueldo);
   // mayorSueldo=calcularMayor(struct Persona obj1[],int i);
    
    return 0;
}

void pedirDatos(struct Persona obj1[], int i) {
    
    if (i == 5) {
        return;
    }else{
    printf("Ingrese el nombre del empleado %d: ", i + 1);
    scanf("%s", obj1[i].nombre);
    printf("Ingrese el sueldo del empleado %d: ", i + 1);
    scanf("%f", &obj1[i].sueldo);
    //printf("Ingrese el sexo del empleado %d: ", i + 1);
    //scanf("%f", &obj1[i].sexo);
    pedirDatos(obj1, i + 1);
    }
}

void mostrarDatos(struct Persona obj1[], int i) {
    
    if (i == 5) {
        return;
    }
    printf("Empleado %d:\n", i + 1);
    printf("Nombre: %s\n", obj1[i].nombre);
    printf("Sueldo: %.2f\n", obj1[i].sueldo);
   // printf("Sexo: %.2f\n", obj1[i].sexo);
    mostrarDatos(obj1, i + 1);

}


