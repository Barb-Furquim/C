#include <stdio.h>

int main (void){
    int numero;
    printf ("Ingresse um número inteiro: ");
    scanf ("%d", &numero);
    if(numero<0)
    {
        printf ("o número é negativo\n");
    }
    else
    {
        printf ("o número é positivo\n");
    }
    return 0;
}
