#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float interacoes, num1, numT, media;
    printf("Quantos numeros ser�o somados?: ");
    scanf("%f",&interacoes);

    for (int i = 1; i <= interacoes; i++){
        printf("Digite o numero %d: ", i);
        scanf("%f",&num1);
        numT += num1;
        media = (numT/interacoes);
    }
printf("A media dos numeros �: %.2f", media);
}
