#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nascimento, presente, anos, mes, dias;
    printf("\nEm que ano voce esta neste momento:");
    scanf("%d",&presente);
    printf("\nEm que ano voce nasceu:");
    scanf("%d",&nascimento);
    anos = presente - nascimento;
    mes = anos * 12;
    dias = anos * 365;
    printf("\nA sua idade eh...\nEm anos:%d\nEm meses:%d\nEm Dias:%d\n",anos, mes, dias);
    return 0;
}
