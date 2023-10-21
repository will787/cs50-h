//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int input;
    do
    {
        input = get_int("Digite um número de 1 a 8: ");
    }
    while (input < 1 || input > 9);

    if (input >= 1 && input <= 8)
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
                printf("  ");
                int k = input;
                while (k > 0)
                {
                    if (input - k - 1 < j)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(" ");
                    }
                    k--;
                }
                printf("\n");
                j++;
            }
        }
}