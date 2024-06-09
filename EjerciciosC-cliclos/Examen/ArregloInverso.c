#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el número de elementos: ");
    scanf("%d", &n);

    char arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d:\n",i);
        scanf(" %c", &arr[i]);
    }

    printf("Los elementos en orden inverso son:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}

