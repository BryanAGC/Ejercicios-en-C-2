#include<stdio.h>

struct fraccion{
    int den;
    int num;
};
int main(void){
    struct fraccion frac1;
    struct fraccion frac2;
    frac1.den=3;//a
    frac1.num=4;//b

    frac2.den=6;//c
    frac2.num=2;//d
    multipli(frac1,frac2);
    div(frac1,frac2);
    suma(frac1,frac2);
    return 0;
   }

int multipli(struct fraccion mul1,struct fraccion mul2){
    int den=mul1.den*mul2.den;
    int nom=mul1.num*mul2.num;

    printf("Multiplicacion: %d/%d",den,nom);
    return 0;
}
int suma(struct fraccion mul1,struct fraccion mul2){
    int den=(mul1.den*mul2.num)+(mul1.num*mul2.den);
    int nom=mul1.num*mul2.num;

    printf("Suma: %d/%d",den,nom);
    return 0;
}
int div(struct fraccion mul1,struct fraccion mul2){
    int den=mul1.den*mul2.num;
    int nom=mul1.num*mul2.den;

    printf("Division: %d/%d",den,nom);
    return 0;
}