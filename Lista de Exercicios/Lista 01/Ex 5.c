#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double valor;
    printf("Conversor de Reais em Dolar\nQual valor deseja converter:");
    scanf("%lf",&valor);
    valor = valor / 5.40;
    printf("Em dolar fica:%.2lf",valor);
}
