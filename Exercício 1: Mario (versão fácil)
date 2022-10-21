#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
// Imput para obter altura da pirâmide
        n = get_int("Escolha uma altura de 1 a 8: ");
    }
    while (n > 8);
    {
        // loop para montar a pirâmide
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // Condição para imprimir os espaços em branco e as #
                if (i + j < n - 1) // soma das variáveis i + j | chegacam | subtração -1
                {
                    printf("."); // o resultado da checagem de if vai ser o nº de espaços ou . a cada volta do laço
                }
                else
                {
                    printf("#"); // o resto da checagem de if vai ser o nº de # a cada volta do laço
                }
            }
            printf("\n"); // Pula uma linha a cada volta do laço
        }
    }
}
