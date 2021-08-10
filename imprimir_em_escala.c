#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[101];
    int x,i;

    printf("Digite a frase : ");
    fgets(frase,101,stdin);

    //printf("%s",frase);

    printf("Digite o nÃºmero de vezes que deseja exibir a frase : ");
    scanf("%d",&x);

    for(i=0;i<x;i++){
        printf("%s",frase);
    }

    return 0;
}
