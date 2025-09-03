#include <stdio.h>
#include <stdlib.h>

int main()
{
int prato,sobremesa,bebida,calT;
    printf("Vamos montar sua refeicao!\n\nEscolha seu prato!\n\n");
    printf("1.Vegetariano (180 cal)\n2.Peixe (230 cal)\n3.Frango(250 cal)\n4.Carne(350 cal)\n");
    printf("\nQual a sua escolha:");
    scanf("%d",&prato);
    switch(prato){
        case 1:{
            calT = 180;
            break;
        }
        case 2:{
            calT = 230;
            break;
        }
        case 3:{
            calT = 250;
            break;
        }
        case 4:{
            calT = 350;
            break;
        }
        default:{
            printf("\nNenhuma opcao incontrada, renicie o sistema!\n");
        }
    }
    printf("\nEscolha sua sobremesa!\n\n");
    printf("1.Abacaxi(75 cal)\n2.Sorvete diet(110 cal)\n3.Mousse diet(170 cal)\n4.Mousse Chocolate (200 cal)\n");
    printf("\nQual a sua escolha:");
    scanf("%d",&sobremesa);
    switch(sobremesa){
        case 1:{
            calT = calT + 75;
            break;
        }
        case 2:{
            calT = calT + 110;
            break;
        }
        case 3:{
            calT = calT + 170;
            break;
        }
        case 4:{
            calT = calT + 200;
            break;
        }
        default:{
            printf("\nNenhuma opcao incontrada, renicie o sistema!\n");
        }
    }
    printf("\nEscolha sua bebida!\n\n");
    printf("1.Cha(20 cal)\n2.Suco de Laranja(70 cal))\n3.Suco de Melao(100 cal)\n4.Refrigerante diet(65 cal)\n");
    printf("\nQual a sua escolha:");
    scanf("%d",&bebida);
    switch(bebida){
        case 1:{
            calT = calT + 20;
            break;
        }
        case 2:{
            calT = calT + 70;
            break;
        }
        case 3:{
            calT = calT + 100;
            break;
        }
        case 4:{
            calT = calT + 65;
            break;
        }
        default:{
            printf("\nNenhuma opcao incontrada, renicie o sistema!\n");
        }
    }
    printf("\n\nVoce consumiu um Total de %d Calorias!\n\n",calT);
    return 0;
}
