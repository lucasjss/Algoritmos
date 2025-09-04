#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Digite um valor para b: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("O maior valor e: %d\n", a);
    }
    else
    {
        printf("O maior valor e: %d\n", b);
    }

    return 0;
}
