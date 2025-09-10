#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor,maior,menor;
    double soma = 0;
    for(int i=1;i<=10;i++){
        printf("Informe o (%d) valor:",i);
        scanf("%d",&valor);

        soma += valor;

        if(i==1){
            maior = valor;
            menor = valor;
        }
        else if(maior < valor){
            maior = valor;
        }
        else if(menor > valor){
            menor = valor;
        }

    }
    printf("O Maior valor eh o (%d)!\nO Menor valor eh o(%d)!\nE a soma dos valores eh(%.2lf)!\nA media dos valor eh (%.2lf)!",maior,menor,soma,(soma/10));
}
