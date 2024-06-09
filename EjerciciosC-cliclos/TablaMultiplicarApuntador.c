#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("\n");

    // Ciclos anidados para generar las tablas de multiplicar
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
