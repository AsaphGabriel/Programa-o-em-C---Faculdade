#include "stdio.h"
#include "stdlib.h"
int main(){
    int num;
    printf("Digite um numero para conferir a sua tabuada: ");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++){
        int multi = num * i;
        printf("\n %d x %d = %d\n",num,i,multi);
    }
}