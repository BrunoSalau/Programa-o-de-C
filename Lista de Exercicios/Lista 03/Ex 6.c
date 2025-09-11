#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor,soma=0;
    int i=0;
    do{
        printf("De um valor:");
        scanf("%lf",&valor);
        if(valor != -99){
        soma += valor;
        i++;
        }
    }while(valor != -99);

    printf("A soma dos valores eh (%.2lf)!\nE a media eh (%.2lf)!",soma,soma/i);
}
