#include<stdio.h>

struct DATACIC{

    char sexo[10];
    char sueldo[10];
    char nombre[50]
};
int main(void){
struct DATACIC empleado;
printf("Ingresa el nombre del empleado: \n");
scanf("%s", &empleado.nombre);
printf("Ingresa el suldo del empleado: \n");
scanf("%s", &empleado.sueldo);
printf("ingrese el sexo del empleado \n");
scanf("%s",&empleado.sexo);

printf("\n");

printf("Nombre: %s\t",empleado.nombre);
printf("Sueldo: %s\t",empleado.sueldo);
printf("Sexo : $%s\t",empleado.sexo);

return 0;
}