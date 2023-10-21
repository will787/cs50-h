//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int input;
    do
    {
        input = get_int("Digite um número de 1 a 8: ");
        if (input > 0 && input < 9)
        {
            int j = 0;
            while (j < input)
            {
                int i = 0;
                while (i < input)
                {
                    if (input - j - 2 < i)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(" ");
                    }
                    i++;
                }
                j++;
                printf("\n");
            }
        }
    }
    while (input < 1 || input > 8);
}