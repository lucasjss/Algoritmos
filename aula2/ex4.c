#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1;
    int number2;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%d", &number1);
    printf("Digite o segundo numero: ");
    scanf("%d", &number2);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);
    
    switch (op)
    {
        case '+':
        printf("Resultado: %d\n", number1 + number2);
        break;

        case '-':
        printf("Resultado: %d\n", number1 - number2);
        break;

        case '*':
        printf("Resultado: %d\n", number1 * number2);
        break;

        case '/':
        if (number2 != 0)
        {
            printf("Resultado: %.2f\n", (float)number1 / number2);
        }
        else
        {
            printf("Erro: Divisao por zero nao e permitida.\n");
        }
        break;

        default:
        printf("Operacao invalida.\n");
        break;
    }

    return 0;
}
