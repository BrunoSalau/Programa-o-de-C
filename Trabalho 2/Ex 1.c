#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,o;
    double a,b,c,media;
        printf("Por favor, digite um numero inteiro:");
        scanf("%d",&i);
        printf("\nPerfeito, agora de mais tres valores (pode ser inteiros ou decimais):");
        scanf("%lf %lf %lf",&a,&b,&c);
        o = i % 2;
    if(o == 0){
        printf("\n\nValores dados: %.2lf, %.2lf, %.2lf\n\n",a,b,c);
        media = (a+b+c)/3;
        printf("\n--Ja que o valor de i eh par, a media aritimetica dos tres numeros anteriores:%.2lf\n\n",media);
    }
    else if(o == 1 && i>10){
        printf("\n\nValores dados: %.2lf, %.2lf, %.2lf\n\n",a,b,c);
        printf("\n\n--Pesos dos valores dados respectivamente:2, 3, 4.\n\n");
        media = ((a * 2)+(b * 3)+(c * 4))/9;
        printf("\n--Ja que o valor de i eh impar e maior que 10, a media ponderada dos tres numeros anteriores:%.2lf\n\n",media);
    }
    else{
        printf("\ni é um valor impar e menor que dez, logo o sistema nao aceita tal tipo de valor, tenha um bom dia!\n");
    }
    return 0;
}
