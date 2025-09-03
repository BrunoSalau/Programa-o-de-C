#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    double a,b;
    printf("Digite um numero:");
    scanf("%lf",&a);
    printf("\nDigite outro numero:");
    scanf("%lf",&b);
    printf("\nOtimo, agora escolhe uma das opcoes!\n\n");
    printf("1-Soma de 2 Numeros\n2-Diferenca entre 2 numero (maior pelo menor).\n3-Produto entre 2 numeros.\n4-Divisaoo entre 2 numero (denominador nao pode ser zero)\n\n");
    printf("Opcao:");
    scanf("%d",&op);
    switch(op){
     case 1:{
         printf("A soma deles eh:%.2lf",(a+b));
         break;
    }

     case 2:{
        if(a > b){
            printf("\nA diferenca dos numeros eh:%.2lf\n",(a-b));
        }
        else{
            printf("\nA diferenca dos numeros eh:%.2lf\n",(b-a));
        }
        break;
    }
    case 3:{
        printf("\nO produto dos numeros eh:%.2lf\n",(a*b));
        break;
    }
    case 4:{
        if(b == 0){
            printf("\nImposivel dividir um numero por zero!!\n");
        }
        else{
            printf("\nA divisao do numero %.2lf pelo %.2lf eh:%.2lf\n",a,b,(a/b));
        }

        break;
    }
    default:{
        printf("\nOpcao invalida!\n");
    }


    }
return 0;
}
