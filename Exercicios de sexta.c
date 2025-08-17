#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
/*===========================================================================================================
  Exercicio 1*/
    double salario;
    printf("Digite o seu salario aqui pro reajuste:");
    scanf("%lf",&salario);
    salario = salario + (salario * 0.25);
    printf("O seu novo salario eh:%.2lf\n",salario);
    return 0;*/
/*===========================================================================================================
  Exercicio 2*/
    double salario, reajuste;
    printf("Digite o seu salario aqui pro reajuste:");
    scanf("%lf",&salario);
    reajuste = (salario * 0.25);
    salario = salario + reajuste;
    printf("O seu novo salario eh:%.2lf Reais\nTendo um aumento de:%.2lf Reais\n",salario, reajuste);
    return 0;
/*===========================================================================================================
  Exercicio 3*/
    int nascimento, presente, anos, mes, dias;
    printf("\nEm que ano voce esta neste momento:");
    scanf("%d",&presente);
    printf("\nEm que ano voce nasceu:");
    scanf("%d",&nascimento);
    anos = presente - nascimento;
    mes = anos * 12;
    dias = anos * 365;
    printf("\nA sua idade eh...\nEm anos:%d\nEm meses:%d\nEm Dias:%d\n",anos, mes, dias);
    return 0;
/*===========================================================================================================
  Exercicio 4*/
    double A, B, C;
    printf("De um valor para A:");
    scanf("%lf",&A);
    printf("De um valor para B:");
    scanf("%lf",&B);
    C = A;
    A = B;
    B = C;
    printf("o valor de A agora eh:%.2lf\no valor de B agora eh:%.2lf", A,B);
    return 0;
/*===========================================================================================================
  Exercicio 5*/
    double valor;
    printf("Conversor de Reais em Dolar\nQual valor deseja converter:");
    scanf("%lf",&valor);
    valor = valor / 5.40;
    printf("Em dolar fica:%.2lf",valor);
/*===========================================================================================================
  Exercicio 6*/
    double saco, gato1, gato2, dose;
    printf("Quantos Quilos pesa o saco de racao que voce comprou:");
    scanf("%lf",&saco);
    printf("Quantas gramas de racao voce dara pro seu primeiro gato:");
    scanf("%lf",&gato1);
    printf("Quantas gramas de racao voce dara pro seu segundo gato:");
    scanf("%lf",&gato2);
    saco = saco * 1000;
    dose = gato1 + gato2;
    dose = dose * 5;
    saco = saco - dose;
    printf("Depois de dar a mesma quantia de racao para seus gatos por 5 dias sobrara %.2lf gramas de racao no saco\n", saco);
    return 0;



}
