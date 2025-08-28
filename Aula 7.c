#include <stdio.h>
int main(){
    /*int dia;
    printf("Escolha um dia da semana entre 1 a 7:");
    scanf("%d",&dia);
    switch(dia){
        case 1:
         printf("\nDomingo!\n");break;

        case 2:
         printf("\nSegunda!\n");break;

        case 3:
         printf("\nTerca!\n");break;

        case 4:
         printf("\nQuarta!\n");break;

        case 5:
         printf("\nQuinta!\n");break;

        case 6:
         printf("\nSexta!\n");break;

        case 7:
         printf("\nSabado!\n");break;

        default:
            printf("Numero invalido");

    }
    return 0;*/

    /*char conceito;
    printf("Escreva o conceito, o mesmo deve conter apenas um caracter:");
    scanf("%c",&conceito);
    switch(conceito){
        case 'A':{
            printf("Exelente");
            break;}
        case 'a':{
            printf("Exelente");
            break;}
        case 'B':{
            printf("Bom");
            break;}
        case 'b':{
            printf("Bom");
            break;}
        case 'C':{
            printf("Regular");
            break;}
        case 'c':{
            printf("Regular");
            break;}
        case 'D':{
            printf("Reprovado");
            break;}
        case 'd':{
            printf("Reprovado");
            break;}
        default:{
            printf("Conceito inexistente");}

    }
    return 0;*/

    /*char operador;
    double a,b;
    printf("Digite qual opecao voce quer fazer:(+,-,*,/)");
    scanf("%c",&operador);
    printf("Digite os dois valores que voce quer usar:");
    scanf("%lf %lf",&a,&b);
    switch(operador){
        case '+':{
            printf("%.2lf %c %.2lf = %.2lf",a,operador,b,(a + b));break;}
        case '-':{
            printf("%.2lf %c %.2lf = %.2lf",a,operador,b,(a - b));break;}
        case '*':{
            printf("%.2lf %c %.2lf = %.2lf",a,operador,b,(a * b));break;}
        case '/':{
            if(b != 0){printf("%.2lf %c %.2lf = %.2lf",a,operador,b,(a / b));}
            else{printf("Conta invalida");}}
        break;
        default:{
            printf("Conta invalida");}}
    return 0;
}
