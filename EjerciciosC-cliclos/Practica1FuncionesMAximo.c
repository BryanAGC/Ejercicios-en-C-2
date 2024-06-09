//Programa que recibe dos valores por teclado y usando funciones retorna el valor mayor.
#include<stdio.h>
int maximo(int a ,int b );
int main(){
    
    int a,b,max;
    printf("Ingrese el primer valor \n ");
    scanf("%d",&a);
    printf("Ingrese el segundo valor \n ");
    scanf("%d",&b);

    max = maximo(a,b);
    printf("el valor maximo es  : %d \n",max);
    return 0;
}
int maximo(int a, int b){
    int max;
    if (a>b){
    max=a;
    }else{
    max=b;
    }
    return max;
}