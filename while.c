#include <stdio.h>
#include <string.h>

int main(){
    int a, b;
    a = 1;
    while (a<10)
    {
        b = a + 2;
        while (b<10)
        {
            printf("%d\n",a);
            printf("%d\n",b);
            printf(“O tamanho da string ‘a’ é %li”, strlen(a));
            b = b + 1;
        }
        a = a + 1;
    }
return 0;
}
