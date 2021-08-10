#include <stdio.h>
int main(void)
{
    int numero=0;
    printf("Digite um numero:");
    scanf("%d",&numero);
    if(numero % 5 == 0){
        printf("%d e divisivel por 5.\n",numero);
     }
    else
    {
        printf("%d nao e divisivel por 5 .\n",numero);
    }
    return 0;
}
