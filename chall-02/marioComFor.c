//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int input;
    do
    {
        input = get_int("Digite um número de 1 a 8: ");
    }
    while (input < 1 || input > 8);

    for (int i = 1; i <= input; i++)
    {
        for (int j = 0; j < input - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("  ");

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
