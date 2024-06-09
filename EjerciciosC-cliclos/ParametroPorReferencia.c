int main(void)
{
int x = 2;
int y = 5;
printf ("Antes x = %d, y = %d \n", x, y);
intercambio (&x, &y);
printf ("Despues x = %d, y = %d \n", x, y);
return 0 ;
}
void intercambio(int *a, int *b){
int temp;
temp = *b;
*b = *a;
*a = temp;

}