#include <stdio.h>

int main() {
    int n;
    printf("Introduzca la dimension n: ");
    scanf("%d", &n);

    // Recorrer todas las combinaciones de factores
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Imprimir la tabla de multiplicar
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n"); // Separar cada tabla con una línea en blanco
    }

    return 0;
}
