#include<stdio.h>
#include<stdlib.h>
int main(void){
    int s=0,v=0;
    do{
        printf("Ao terminar de digitar os valores ,digite 0 para somar os pares");
        printf("\nDigite um valor :  \n");
        scanf("%i",&v);
        if(v%2==0){
            s+=v;
        }
    }while(v!=0);
    printf("\n A soma dos pares e: %i",s);
}
