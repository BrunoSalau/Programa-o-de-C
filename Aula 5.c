#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int n;
    printf("digite um numero e direi se é Par ou Impar:");
    scanf("%d",&n);
    n = n % 2;
    if(n == 0){
        printf("eh Par");
    }
    if(n != 0){
        printf("eh Impar");
    }
    return 0;*/

    /*int n;
    printf("digite um numero e direi se é Positivo ou Negativo:");
    scanf("%d",&n);
    if(n > 0){
        printf("eh Positivo");
    }
    if(n <= 0){
        printf(" Negativo");
    }
    return 0;*/

    int n1,n2;
    printf("Informe o valor n1:");
    scanf("%d",&n1);
    printf("Agora informe outro valor e colocarei em ordem");
    scanf("%d",&n2);
    if(n1>n2){
        printf("%d\n%d",n2, n1);
    }
    else{
        printf("%d\n%d",n1, n2);
    }
    return 0;
}
