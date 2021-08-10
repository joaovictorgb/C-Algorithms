#include <stdio.h>

int main(void)
{
    int filhos,somaf,aux=0;
    float sal, somasal,maior=0,mediasal,mediaf;

    while(sal!=-1){
        printf("Digite qual seu salÃ¡rio :");
        scanf("%f",&sal);
        if(sal == -1){
            break;
        }
        if(sal>maior){
            maior = sal;
        }
        somasal = somasal +sal;

        printf("Digite quantos filhos tem :");
        scanf("%d",&filhos);
        somaf = somaf +filhos;

        aux = aux+1;
    }

    mediasal = somasal/aux;
    mediaf = somaf/aux; 

    printf("A media salarial Ã© de :%.2f \n", mediasal);
    printf("A media de filhos Ã© de :%.2f \n", mediaf);
    printf("O maior salÃ¡rio :%.2f \n", maior);
    return 0;
}
