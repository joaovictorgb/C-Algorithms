#include <stdio.h>

int main(void)
{
    int opiniao,idade,cont1=0,somaidade=0,aux=0,count3=0;

    while (idade!=0)
    {   
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        if(idade==0){
            break;
        }

        printf("Digite sua opiniÃ£o (1,2 ou 3)");
        scanf("%d",&opiniao);
        if (opiniao == 1){
            cont1=cont1+1;
            somaidade = somaidade +idade;
            aux = aux+1;
        }else if(opiniao ==3){
            count3 =count3+1;
        }
        


    }
    printf("Satisfatorio %d  ",cont1);
    printf("Media satisfatorio /n%d",somaidade/aux);
    printf("insatisfatorios: %d ",count3);
    
    return 0;
}
