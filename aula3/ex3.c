#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, count = 0;
    scanf("%d %d", &number1, &number2);

    for (number1; number1 <= number2; number1++)
    {
        printf("%d ", number1);
    }

    return 0;
}
