#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,sexo,cont,smIdadeH=0,qntH=0,qntM=0;
    double peso,smPesoM=0;
    for(int i=1;i<=10;i++){
        printf("\n=====================================================================\n");
        printf("\nDigite a idade da pessoa %d:",i);
        scanf("%d",&idade);
        printf("\nDigite o peso da pessoa %d:",i);
        scanf("%lf",&peso);
        printf("\nSobre a pessoa %d, digite (1) se for Homen ou (2) se for Mulher:",i);
        scanf("%d",&sexo);

        if(sexo == 1){
            qntH = qntH + 1;
            smIdadeH = smIdadeH + idade;
        }
        else if(sexo == 2){
            qntM = qntM + 1;
            smPesoM = smPesoM + peso;
        }
    }
    printf("\nNesse grupo de 10 pessoas a um total de (%d Mulheres) e (%d Homens)!!\n",qntM,qntH);
    printf("\nA soma da idade dos Homens eh %d e a media da idade dos Homens eh %d.\n",smIdadeH,(smIdadeH/10));
    printf("\nA soma do peso das Mulheres eh %.2lf e a media do peso das Mulheres eh %.2lf\n",smPesoM,(smPesoM/10));
    return 0;
}
