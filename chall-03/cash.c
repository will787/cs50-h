//#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float troco;
    do
    {
        troco = get_float("Digite o valor: ");
    }
    while(troco < 0);

    int cent = round(troco * 100);

    int moeda25 =  cent / 25;
    cent %= 25;

    int moeda10 = cent / 10;
    cent %= 10;

    int moeda5 = cent / 5;
    cent %= 5;

    int moeda1 = cent / 1;
    cent %= 1;

    int total_moedas = moeda25 + moeda10 + moeda5 + moeda1;
    printf("%i\n", total_moedas);
    return(0);

}