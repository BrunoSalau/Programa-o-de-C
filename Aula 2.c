#include <stdio.h>
#include <stdlib.h>

int main()
{
  ===============================================
    double valor;
    double valor2;
    double reajuste;
    printf("O valor da sua conta e:");
    scanf("%lf", &valor);
    reajuste = valor * 0.01;
    valor2 = valor + reajuste;
    printf("novo salario: %.2lf", valor2);
    return 0;
  ===============================================
    double preco, desconto, novopreco;
    printf("informe o preco do produto:");
    scanf("%lf", &preco);
    desconto = preco * 0.09;
    novopreco = preco - desconto;
    printf("novo preco: %.2lf\n", novopreco);
    return 0;
  ===============================================
    char v1,v2,v3;
    printf("Informe o primeiro caracter:");
    scanf("%c", &v1);
    printf("Informe o segundo caracter:");
    scanf(" %c", &v2);
    printf("Informe o terceiro caracter:");
    scanf(" %c", &v3);
    printf("%c %c %c\n",v1,v2,v3);
    return 0;
  ===============================================
    int a, b, c, x;
    printf("x=2*((a-c)/8)-b*5 iremos realizar esse calculo com os valores das variaveis que voce descidir\n\nPortanto escreva o valor para \'a\'");
    scanf("%d",&a);
    printf("escreva o valor para \'b\'");
    scanf("%d",&b);
    printf("escreva o valor para \'c\'");
    scanf("%d",&c);
    x = 2 * ((a-c)/8)-b*5;
    printf("O valor de x e: %d",x);
    return 0;
  ===============================================
    int a, b;
    int x1,x2,x3,x4,x5;
    printf("de um valor para \'a\':");
    scanf("%d",&a);
    printf("de um valor para \'b\':");
    scanf("%d",&b);
    x1 = a + b;
    x2 = a - b;
    x3 = a * b;
    x4 = a / b;
    x5 = a % b;
    printf("\nA soma do \'a\' pelo \'b\' e:%d\nA subtracao do \'a\' pelo \'b\' e:%d\nA multiplicacao do \'a\' pelo \'b\' e:%d\nA divicao do \'a\' pelo \'b\' e:%d\nE o resto da divisao do \'a\' pelo \'b\' e:%d\n\n",x1,x2,x3,x4,x5);
    return 0;
   ===============================================
}
