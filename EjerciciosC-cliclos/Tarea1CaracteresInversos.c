#include <stdio.h>
#include <string.h>

void revertir(void);
int main (){
    printf("caracteres: \n");
revertir();
printf("\n");
    return 0;
}
void revertir(){
    char carac;
    scanf("%c",&carac);
    if(carac!= '\n' && carac!=' '){
        revertir();
        printf("%c",carac);
    }
    
}