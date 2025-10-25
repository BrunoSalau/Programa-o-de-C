#include <stdio.h>
#include <stdlib.h>
void calcula(int* c){
    printf("calcula %d %d\n",c, &c);
    (*c)++;
    printf("calcula %d %p\n",(*c), &c);
}
int main()
{
    int c=10;

    printf("%d %p\n",c, &c);
    calcula(&c);
    printf("%d %p\n",c, &c);
    return 0;
}
