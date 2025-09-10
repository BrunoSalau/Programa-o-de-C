#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double salario;
    printf("Digite o seu salario aqui pro reajuste:");
    scanf("%lf",&salario);
    salario = salario + (salario * 0.25);
    printf("O seu novo salario eh:%.2lf\n",salario);
    return 0;
}
