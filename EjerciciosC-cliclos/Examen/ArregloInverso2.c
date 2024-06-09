#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    char *arreglo;

    printf("Ingrese el numero de elemntos que desa ingresar: ");
    scanf("%d", &n);
    
    arreglo = (char*)malloc(n * sizeof(char));

   
    for(i = 1; i < n+1; i++) {
    printf("Ingrese el elemento %d de la cadena: \n",i);
        scanf(" %c", arreglo + i);
    }

    printf("El orden inverso de la cadena es: ");
    for(i = n; i >= 0; i--) {
        printf("%c", *(arreglo + i));
    }
    return 0;
}
