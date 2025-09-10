#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A, B, C;
    printf("De um valor para A:");
    scanf("%lf",&A);
    printf("De um valor para B:");
    scanf("%lf",&B);
    C = A;
    A = B;
    B = C;
    printf("o valor de A agora eh:%.2lf\no valor de B agora eh:%.2lf", A,B);
    return 0;
}
