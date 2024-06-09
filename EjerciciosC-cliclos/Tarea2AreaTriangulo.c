#include<stdio.h>
#include <math.h>
float calcular(float a ,float b , float c );
int main(){
    
    float a,b,c,area;
    printf("Ingrese el primer valor \n ");
    scanf("%f",&a);
    printf("Ingrese el segundo valor \n ");
    scanf("%f",&b);
    printf("Ingrese el tercer valor \n ");
    scanf("%f",&c);
    area = calcular(a,b,c);
    printf("el valor maximo es  : %f \n",area);
    return 0;
}
float calcular(float a ,float b , float c){
    float area,p;
    p=(a+b+c)/2;
    area=sqrt(p*((p-a)*(p-b)*(p-c)));

    return area;
}