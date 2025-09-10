#include <stdio.h>
#include <stdlib.h>

int main()
{
int b,h,a,p;
    printf("Vamos Montar um retangulo!\n");
    printf("De um valor para base:");
    scanf("%d",&b);
    printf("\nAgora de um valor para altura:");
    scanf("%d",&h);
    if(b == h){
        printf("\nIsso eh um Quadrado!\n");
    }
    else{
        p = (b*2)+(h*2);
        a = b*h;
        printf("\nOtimo!\n\nVoce montou um retangulo com base %d e altura %d\n\nPerimetro:%d\nArea:%d\n\n",b,h,p,a);
    }
  return 0;
}
