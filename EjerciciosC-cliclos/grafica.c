#include <stdio.h>

#define ANCHO 50
#define ALTO 20
#define ORIGEN_X ANCHO / 2
#define ORIGEN_Y ALTO / 2

int main(){
    char ventana[ALTO][ANCHO];
    for (int i = 0; i < ALTO; i++){
        for (int j = 0; j < ANCHO; j++){
            ventana[i][j] = ' ';
        }
    }

    for (int i = 0; i < ANCHO; i++){
        ventana[ORIGEN_Y][i] = '-';
    }

    for (int i = 0; i < ALTO; i++){
        ventana[i][ORIGEN_X] = '|';
    }

    float a = 0.5; // coeficiente de la parábola
    for (int i = -ORIGEN_X; i < ANCHO - ORIGEN_X; i++){
        float y = -a * i * i + ORIGEN_Y;
        if (y >= 0 && y < ALTO){
            ventana[(int)y][(int)(i + ORIGEN_X)] = '*';
        }
    }

    for (int i = 0; i < ALTO; i++){
        for (int j = 0; j < ANCHO; j++){
            printf("%c", ventana[i][j]);
        }
        printf("\n");
    }

    return 0;
}