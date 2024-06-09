#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    clock_t inicio,fin;
    double tiempo;
    inicio=clock();
    system("LibreOffice --Impress");
    fin =clock();
    tiempo =(double)(fin - inicio)/CLOCKS_PER_SEC;
    printf("Ciclos: %f",tiempo);
}