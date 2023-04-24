#include<stdio.h>

// declaração/protótipo da função
float soma(float num1, float num2);
float sub(float num1, float num2);
float operacao(char op, float num1, float num2);

int main(void)
{
    // variável local
    float resultado;
    resultado = soma(5, 7);
    printf("%f\n", resultado);

    resultado = sub(5, 7);
    printf("%f\n", resultado);

    resultado = operacao('A', 5, 7);
    printf("%f\n", resultado);

    resultado = operacao('B', 8, 3);
    printf("%f\n", resultado);

    resultado = operacao('X', 8, 3);
    printf("%f\n", resultado);


}

// Corpo da função
float sub(float num1, float num2)
{
    float minus;
    minus = num1 - num2;

return minus;
}


float soma(float num1, float num2)
{
    float sum;
    sum = num1+num2;

return sum;
}

float operacao(char op, float num1, float num2)
{
    if (op == 'A')
    {
        float resultado;
        resultado = soma(num1, num2);
        return resultado;
    }
    else if (op == 'B')
    {
        float resultado;
        resultado = sub(num1, num2);
        return resultado;
    }

return 0;
}
