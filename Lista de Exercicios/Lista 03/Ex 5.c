#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    double peso,s1=0,s2=0,s3=0,s4=0;
    for(int i=1;i<=15;i++){
        printf("Digite a idade da pessoa %d:",i);
        scanf("%d",&idade);
        printf("Digite o peso da pessoa %d:",i);
        scanf("%lf",&peso);
        if (idade<=10){
            s1 += peso;
        }
        else if (idade>=11 && idade<=20){
            s2 += peso;
        }
        else if (idade>=21 && idade<=30){
            s3 += peso;
        }
        else if (idade>30){
            s4 += peso;
        }
    }
    printf("\n==================================================================\n");
    printf("\n\nA soma do peso das pessoas de 1 a 10 anos eh(%.2lf)\n\n",s1/15);
    printf("\n\nA soma do peso das pessoas de 11 a 20 anos eh(%.2lf)\n\n",s2/15);
    printf("\n\nA soma do peso das pessoas de 21 a 30 anos eh(%.2lf)\n\n",s3/15);
    printf("\n\nA soma do peso das pessoas maiores de 30 anos eh(%.2lf)\n\n",s4/15);
    printf("\n==================================================================\n");

}
