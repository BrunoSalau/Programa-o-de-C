#include <stdio.h>
#include <stdlib.h>

int main()
{
double salarioB,salarioF;
    printf("Quantos voce recebe de salario:");
    scanf("%lf",&salarioB);
    if(salarioB <= 750){
        salarioF = 100 + salarioB + (salarioB * 0.05);
    }
    else{
        salarioF = salarioB + (salarioB * 0.05);
    }
    printf("Agora Voce passou a receber %.2lf Reais de salario!",salarioF);
    return 0;
}
