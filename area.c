#include <stdio.h>
#include <stdlib.h>

int main(void){
    float r;
    float const PI=3.1416;       \\ Modificadores
    printf("Valor de raio: ");
    scanf("%f", &r);
    double area;
    area = PI*r*r;
    printf("A área do círculo é: %f\n", area);
    return 0;
}
