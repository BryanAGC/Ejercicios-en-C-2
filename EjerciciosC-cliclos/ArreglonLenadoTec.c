#include <stdio.h>

int main() {
  int x;
  
  printf("Ingrese el tamaño del arreglo: ");
  scanf("%d", &x);
  
  int arreglo[x];
  
  printf("Ingrese los valores del arreglo:\n");
  
  for(int i = 0; i < x; i++) {
    printf("arreglo[%d] = ", i);
    scanf("%d", &arreglo[i]);
  }
  
  printf("Los valores del arreglo son:\n");
  
  for(int i = 0; i < x; i++) {
    printf("arreglo[%d] = %d\n", i, arreglo[i]);  
  }
  
  return 0;
}
