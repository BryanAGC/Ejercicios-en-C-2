#include <stdio.h>
int main() {
    char *etp1[] = {"Hace bromas irientes", "Chantajea", "Miente", "Ignora", "Cela"};
    char *etp2[] = {"Acecha o stalkea", "Culpabiliza", "Ridiculiza u ofende", "Humilla en publico", "Intimida o manenaza"
                  , "Controla o prohibe", "Destruye tus articulos personales", "Manosea", "Acaricia agresivamente", "Golpea Jugando"
                 , "Pellisca o jalonea"};
         char* etp3[] = {"Encierra", "Sextorciona", "Difunde contenido intimi de ti", "Amenaza de muerte", "Abusa sexualmente ", "Fuerza a una relacion sexual" , "Viola", "Mutila"};        
    int i; 
    int res,contador=0;
    
    for(i = 0; i < 5; i++) {
        printf("Tu pareja te %s?\n1--SI\n2--NO\n", etp1[i]);
        scanf("%d",&res);
        if (res==1){ 
            contador=contador+1;
         }else if(res==2){    
            contador=contador+0;
        }
        
    }
    for(i = 0; i < 11; i++) {
        printf("Tu pareja te %s?\n1--SI\n2--NO\n", etp2[i]);
        scanf("%d",&res);
        if (res==1){
            contador=contador+5;
        }else if(res==2){
            contador=contador+0;
        }
    }
        for(i = 0; i < 8; i++) {
        printf("Tu pareja te %s?\n1--SI\n2--NO\n", etp3[i]);
        scanf("%d",&res);
        if (res==1){
            contador=contador+50;
        }else if(res==2){
            contador=contador+0;
        }
    }

    if (contador<5){
        printf("Usted se encuentra en la etapa 1 del vilentometro, lo que experimenta es el inicio de una mala relacion \n%d",contador);
    }else if (contador==5)
    {
    printf("Usted esta apundo de entrar a la etapa 2 del violentometro, aun esta a tiempo de tomar las medidad adecuadas\n%d",contador);
    }else if (contador>5&&contador<70) {
         printf("Usted se encuentra en la segunta etapa del violentometro, tenga extrema precaucion esta una etapa muy\n peligrosa para una relacion acuda a ayuda profecional que lo(a) pueda orientar\n%d",contador);
   
    }else if (contador>50&&contador<120)
    {
    printf("Usted esta apunto de entrar a la etapa 3 del vilentometro su salud fisica y psicologia estan en gravepeligro \n no espere mas y busque ayuda profecional en este punto todo puede ocurrir \nusted y los qeu lo rodean pueden estar en gravepeligro Contactanos(03202106281141090001)");
    }else if (contador>120)
    {
    printf("!!ALERTA!! USTED Y LOS QUE LO RODEAN ESTAN EN PELIGRO LLAMANOS!!!!(03202106281141090001");
    }
    
    
    
    return 0;
}
