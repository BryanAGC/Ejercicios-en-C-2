#include<stdio.h>

struct CD{
    char canciones[10];
    char anio[10];
    char precio[10];
    char titulo[50]
};
int main(void){
struct CD cd1;
printf("Ingresa el titulo: \n");
scanf("%s", &cd1.titulo);
printf("Ingresa el numero de cansiones: \n");
scanf("%s", &cd1.canciones);
printf("ingrese el año de estreno: \n");
scanf("%s",&cd1.anio);
printf("ingrese el precio: \n");
scanf("%s",&cd1.precio);
printf("\n");

printf("Ttulo: %s\t",cd1.titulo);
printf("Canciones: %s\t",cd1.canciones);
printf("Año: %s\t",cd1.anio);
printf("Precio:%s\t",&cd1.precio);

return 0;
}