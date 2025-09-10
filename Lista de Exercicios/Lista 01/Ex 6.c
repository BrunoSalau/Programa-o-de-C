#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double saco, gato1, gato2, dose;
    printf("Quantos Quilos pesa o saco de racao que voce comprou:");
    scanf("%lf",&saco);
    printf("Quantas gramas de racao voce dara pro seu primeiro gato:");
    scanf("%lf",&gato1);
    printf("Quantas gramas de racao voce dara pro seu segundo gato:");
    scanf("%lf",&gato2);
    saco = saco * 1000;
    dose = gato1 + gato2;
    dose = dose * 5;
    saco = saco - dose;
    printf("Depois de dar a mesma quantia de racao para seus gatos por 5 dias sobrara %.2lf gramas de racao no saco\n", saco);
    return 0;
}
