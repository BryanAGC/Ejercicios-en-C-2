#include <stdio.h>
#include <time.h>
float pi = 3.1416;
    float radio,area;
unsigned long long rdtsc() {
    unsigned int lo, hi;
    __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    return ((unsigned long long)hi << 32) | lo;
}
int main() {
    unsigned long long start, end;
    unsigned long long cycles;    
    start = rdtsc(); 
    
    printf("Porfavor ingrese el valor del radio del circulo");
    scanf("%f",&radio);
    area = pi * (radio * radio);


    end = rdtsc(); 
    cycles = end - start; 
    printf("El area es: %f",area);
    printf("Ciclos de reloj: %llu\n", cycles);
    return 0;
}