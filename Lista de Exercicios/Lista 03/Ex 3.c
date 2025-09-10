#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,rst,i=1;
    printf("Deu o valor de X:");
    scanf("%d",&x);
    printf("Deu o valor de Y;");
    scanf("%d",&y);
    while(i<=y){
        if(i==1){
            rst = x;
        }
        else{
            rst = rst * x;
        }
        i++;
    }
    printf("Resultado:%d",rst);
}
