#include <stdio.h>

int main(void)
{
    int idade,somaidade,aux=0;
    float altura, somaaltura,mediaidade,mediaaltura;

    while(idade!=0){
        printf("Digite qual sua idade :");
        scanf("%d",&idade);
        if(idade == 0){
            break;
        }
        somaidade = somaidade +idade;

        printf("Digite qual altura :");
        scanf("%f",&altura);
        somaaltura = somaaltura +altura;


        aux = aux+1;
    }

    float x = somaidade;
    mediaidade = x/aux;
    mediaaltura = somaaltura/aux; 

    printf("A media de idade Ã© de\n :%.2f", mediaidade);
    printf("A media de altura Ã© de\n :%.2f", mediaaltura);
    return 0;
}
