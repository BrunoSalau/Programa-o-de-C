#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op,i=1;
    double v1,v2,s;
    do{
        printf("\n\n1.Multiplicar\n\n2.Somar\n\n3.Subtrair\n\n4.Dividir\n\n5.Sair\n\n");
        printf("Escolha uma das opcoes:");
        scanf("%d",&op);

        switch(op){
            case 1:{
                printf("\nDigite um valor:");
                scanf("%lf",&v1);
                printf("\nDigite outro valor:");
                scanf("%lf",&v2);
                printf("\n=====================\n");
                printf("%.2lf x %.2lf = %.2lf",v1,v2,(v1*v2));
                printf("\n=====================\n");
                break;
            }
            case 2:{
                printf("\nDigite um valor:");
                scanf("%lf",&v1);
                printf("\nDigite outro valor:");
                scanf("%lf",&v2);
                printf("\n=====================\n");
                printf("%.2lf + %.2lf = %.2lf",v1,v2,(v1+v2));
                printf("\n=====================\n");
                break;
            }
            case 3:{
                printf("\nDigite um valor:");
                scanf("%lf",&v1);
                printf("\nDigite outro valor:");
                scanf("%lf",&v2);
                printf("\n=====================\n");
                printf("%.2lf - %.2lf = %.2lf",v1,v2,(v1-v2));
                printf("\n=====================\n");
                break;
            }
            case 4:{
                printf("\nDigite um valor:");
                scanf("%lf",&v1);
                printf("\nDigite outro valor:");
                scanf("%lf",&v2);
                if (v2==0){
                printf("\n=====================\n");
                printf("O divisor nao pode ser 0!");
                printf("\n=====================\n");
                }
            else{
                printf("\n=====================\n");
                printf("%.2lf / %.2lf = %.2lf",v1,v2,(v1/v2));
                printf("\n=====================\n");
            }
            break;
            }
            case 5:{
                i = 5;
                break;
            }
            default:{
                printf("\nOpcao nao existente!\n");
            }
        }
    }while(i != 5);

    printf("\n\nFim do sistema!\n\n");
}
