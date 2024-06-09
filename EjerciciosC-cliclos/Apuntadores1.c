#include<stdio.h>

int main(){
    int a;
    int b;
//***************************
    int dato;
    int *punt;
//***************************
    punt=&dato;    
//***************************
    int x=17,y;
    int *p;
    p=&x;

    //Referenciacion parte 1
    printf("direccion a p: %p \n",&a);
    printf("direccion a d: %d \n",&a);
    printf("direccion b p: %p \n",&b);
    printf("direccion b d: %d \n",&b);
    //Referenciacion parte 2
    printf("punt : %p\n",&punt);
    printf("dato : %p\n",&dato);
    //Referenciacion parte 3
    printf("direccion a puntero: %d \n",*punt);
    //Referenciacion parte 4
    y=*p+3;
    printf("El valor de y es %d \n",y);

    return 0;

}
