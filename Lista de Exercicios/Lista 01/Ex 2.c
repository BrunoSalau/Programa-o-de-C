#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double salario, reajuste;
    printf("Digite o seu salario aqui pro reajuste:");
    scanf("%lf",&salario);
    reajuste = (salario * 0.25);
    salario = salario + reajuste;
    printf("O seu novo salario eh:%.2lf Reais\nTendo um aumento de:%.2lf Reais\n",salario, reajuste);
    return 0;
}
