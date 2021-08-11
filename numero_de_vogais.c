#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void){
    char nome[15];
    int i, j, contador=0;
    char vogais[] = "aeiouAEIOU";
    printf ("Digite um nome: ");
    gets(nome);
    for (i=0;i<strlen(nome);i++){
        for (j=0;j<strlen(vogais);j++){
            if (nome[i] == vogais[j]){
                contador++;
            }
        }
    }
    if (contador == 1){
        printf ("\n\nO nome informado possui 1 vogal\n\n");
    }else{
        printf ("\nO nome informado possui %d vogais", contador);
    }
    return 0;
}
