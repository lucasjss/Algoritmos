#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    int h;
    
    printf("Digite um valor para a base do retângulo: ");
    scanf("%d", &b);
    printf("Digite um valor para altura: ");
    scanf("%d", &h);

    int a = b * h;
    printf("A área do retângulo é: %d\n", a);

    return 0;
}
