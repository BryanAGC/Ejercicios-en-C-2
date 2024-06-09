
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

unsigned long long rdtsc() {
    unsigned int lo, hi;
    __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    return ((unsigned long long)hi << 32) | lo;
}

int main() {
    unsigned long long start, end;
    unsigned long long cycles;
    
    start = rdtsc(); 
    system("libreoffice --impress");
    end = rdtsc(); 
    cycles = end - start; 
    printf("Ciclos de reloj: %llu\n", cycles);
    return 0;
}
