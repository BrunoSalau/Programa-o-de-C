#include <stdio.h>
#include <math.h>

int main()
{
    /*int data, dia, mes, ano;
    printf("digite uma data no formato ddmmaa:");
    scanf("%d", &data);
    dia = data / 10000;
    mes = (data % 10000) / 100 ;
    ano = (data % 10000) % 100 ;
    printf("\n\nDia:%d Mes:%d Ano:%d",dia, mes, ano);
    return 0;*/

    /*double angulo, seno ,cosseno, tangente;
    printf("Escreva o angulo");
    scanf("%lf", &angulo);
    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);
    printf("Seno:%.2lf\n\nCosseno:%.2lf\n\nTangente:%.2lf\n\n", seno, cosseno, tangente);
    return 0;*/

    /*double raiz;
    printf("escreva um numero pra descobrir sua raiz quadra:");
    scanf("%lf", &raiz);
    raiz = sqrt(raiz);
    printf("A raiz do numero eh: %.2lf\n", raiz);
    return 0;*/

    /*double x, y, resultado;
    printf("Informe o valor de x:");
    scanf("%lf",&x);
    printf("Informe o valor de y:");
    scanf("%lf",&y);
    resultado = pow(x, y);
    printf("Resultado: %.2lf\n");
    return 0;*/

    /*double num;
    printf("Informe um numero:");
    scanf("%lf",&num);
    printf("Floor: %lf\n", floor(num));
    printf("Ceil: %lf\n", ceil(num));
    printf("Round: %lf\n", round(num));
    return 0;*/

    /*double primeiro, n, razao, a;
    printf("\ninforme o primeiro numero da PA:");
    scanf("%lf", &primeiro);
    printf("\ninforme a razao da PA:");
    scanf("%lf", &razao);
    printf("\ninforme a posicao do numero que voce quer na PA:");
    scanf("%lf", &n);
    a = primeiro+ (n - 1) * razao;
    printf("O numero que voce deseja descobrir eh: %.2lf", a);
    return 0;*/

    double x1, x2, y1, y2, d, a, b;
    printf("Vamos calcular a distancia do ponta A para o ponto B, primeiro vamos ver aonde esta o ponto A e o ponto B em cordenadas, lembrese que usaremos um plano cartesiano\n\n");
    printf("Escreva o x1 do ponto a:");
    scanf("%lf", &x1);
    printf("Escreva o x2 do ponto a:");
    scanf("%lf", &x2);
    a = x2 - x1;
    printf("Otimo, ja temos a posicao do ponto A que eh: %.2lf\n", a);
    printf("Agora vamos achar o ponto B\n");
    printf("Escreva o y1 do ponto a:");
    scanf("%lf", &y1);
    printf("Escreva o y2 do ponto a:");
    scanf("%lf", &y2);
    b = y2 - y1;
    printf("Otimo, ja temos a posicao do ponto B que eh: %.2lf\n",b);
    d = sqrt((pow(x2 - x1,2))+(pow(y2 - y1,2));
    printf("A distancia do ponto A pro B eh: %.2lf\n",d);
    return 0;





}


