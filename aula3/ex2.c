#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);

    do
    {
        printf("%d ", number1);
        number1++;
    } while (number1 <= number2);

    // while (number1 <= number2)
    // {
    //     printf("%d ", number1);
    //     number1++;
    // }

    return 0;
}
