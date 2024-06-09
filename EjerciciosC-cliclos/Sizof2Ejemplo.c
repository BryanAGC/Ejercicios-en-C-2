int main(){

    int arrary[10]={1,2,3,4,5,6,7,8,9,10};
    int len =sizeof(arrary)/ sizeof(int);

printf("Los bytes del arreglo son: %d\n",sizeof(arrary));
printf("Cada entero tiene: %d bytes\n",sizeof(int));
printf("El array tiene: %d elementos ",len);

return 0;

}