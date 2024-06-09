//Medir os ciclos de reloj al abrir powertPoint
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

     clock_t inicio,fin;
    double tiempo;
    inicio=clock();
    system("Libreoffice --Impress");
    fin =clock();
    tiempo =(double)(fin - inicio)/CLOCKS_PER_SEC;
   // printf("Ciclos: %f",tiempo);
   
 end = rdtsc(); 
    cycles = end - start; 
    printf("Ciclos de reloj: %llu\n", cycles);
    return 0;
}