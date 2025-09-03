#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int chegadaHr,chegadaMin,saidaHr,saidaMin,tempHr,tempMin,tempTotal;
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
        tempHr = saidaHr - chegadaHr;
        if(chegadaMin < saidaMin){
            tempTotal = tempHr + 1; /*Se o minuto de saida for maior que o minuto de chegada acresenta uma hora no tempo do valor*/
        }
        else{
            tempTotal = tempHr;
        }
        /*printf("\nSera constado que no valor do pagamento que voce passou %d de horas no estacionamento\n",tempTotal);*/

    }
    else if(chegadaHr > saidaHr){
        tempHr = chegadaHr - saidaHr;
        tempHr = 24 - tempHr;
        if(chegadaMin < saidaMin){
            tempTotal = tempHr + 1; /*Se o minuto de saida for maior que o minuto de chegada acresenta uma hora no tempo do valor*/
        }
        else{
            tempTotal = tempHr;
        }
        /*printf("\nSera constado que no valor do pagamento que voce passou %d de horas no estacionamento\n",tempTotal);*/
    }
    else{
        tempTotal = 1;
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
