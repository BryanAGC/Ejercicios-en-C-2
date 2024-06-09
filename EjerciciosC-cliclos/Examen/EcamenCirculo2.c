#include <stdio.h>
#include <time.h>
unsigned long long rdtsc() {
    unsigned int lo, hi;
    __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    return ((unsigned long long)hi << 32) | lo;
}
int main() {
    unsigned long long start, end;
    unsigned long long cycles;    
    start = rdtsc(); 

     float radio, area;
  const float pi = 3.14159;
  printf("Ingrese el valor del radio: ");
  scanf("%f", &radio);

  float *apuntaarea = &area;

  *apuntaarea = pi * (radio * radio);

  printf("El area del circulo es: %f", *apuntaarea);

    end = rdtsc(); 
    cycles = end - start; 
    printf("El area es: %f",area);
    printf("Ciclos de reloj: %llu\n", cycles);
    return 0;
}