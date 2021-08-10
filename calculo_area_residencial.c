#include <stdio.h>
#include <string.h>

int main(void)
{
    float total=0,larg,comp;
    char com[21];
    char fim[] = "fim";
    

    while (strcmp(com, fim )!=1){
        printf("Digite o nome do cÃ´modo: ");
        setbuf(stdin,NULL);
        fgets(com,21,stdin);

        if(strcmp(com, fim )==1){
            break;
        }else if(strcmp(com, fim )!=1){

        printf("Digite a largura do comodo em metros : \n");
        scanf("%f",&larg);
        printf("Digite o comprimento do comodo em metros : ");
        scanf("%f",&comp);

        total = total + (larg*comp);
        }

    }

    printf("A Ã¡rea da casa em metros quadrados Ã©: %f",total);
  
    return 0;
}

