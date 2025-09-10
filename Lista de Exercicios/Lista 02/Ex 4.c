#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int chegadaHr,chegadaMin,saidaHr,saidaMin,tempTotal;
    double valor;
    printf("Qual foi o seu horario de chegada em...\n");
    printf("\nhoras:");
    scanf("%d",&chegadaHr);
    printf("minutos:");
    scanf("%d",&chegadaMin);
    printf("\nHorario de chegada: %d:%d",chegadaHr,chegadaMin);
    printf("\n==================================================\n");
    printf("\nQual foi o seu horario de saida em....\n");
    printf("\nhoras:");
    scanf("%d",&saidaHr);
    printf("minutos:");
    scanf("%d",&saidaMin);
    printf("\nHorario de Saida: %d:%d",saidaHr,saidaMin);
    printf("\n==================================================\n");
    if(chegadaHr < saidaHr){
        tempTotal = saidaHr - chegadaHr;
        if(chegadaMin < saidaMin){
            tempTotal = tempTotal + 1; /*Se o minuto de saida for maior que o minuto de chegada acresenta uma hora no tempo do valor*/
        }
        else{
            tempTotal = tempTotal;
        }
    }
    else if(chegadaHr > saidaHr){
        tempTotal = chegadaHr - saidaHr;
        tempTotal = 24 - tempTotal;
        if(chegadaMin < saidaMin){
            tempTotal = tempTotal + 1; /*Se o minuto de saida for maior que o minuto de chegada acresenta uma hora no tempo do valor*/
        }
        else{
            tempTotal = tempTotal;
        }
    }
    else{
        if(chegadaMin < saidaMin){
            tempTotal = 1;
        }
        else if(chegadaMin > saidaMin){
            tempTotal = 24;
        }
        else if(chegadaMin = saidaMin){
            tempTotal = 24;
        }
    }
    printf("Voce pagara por %d horas de estacionamento!",tempTotal);
    if(tempTotal <= 2){
        valor = tempTotal * 1;
    }
    else if(tempTotal <= 4 && tempTotal > 2){
        tempTotal = tempTotal - 2;
        valor = 2 + (tempTotal * 1.40);
    }
    else{
        tempTotal = tempTotal - 4;
        valor = 4.80 + (tempTotal * 2);
    }
    printf("\n\nO valor ficara em %.2lf Reais!\n",valor);
    return 0;
}
