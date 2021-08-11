#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int tam;
    printf("Qual o tam do vetor: ");
    scanf("%d", &tam);
    int i;
    int *vetorA, *vetorB;
    vetorA = (int *) malloc (sizeof(int)*tam);
    vetorB = (int *) malloc (sizeof(int)*tam);
    
    //Escrever
    for(i=0; i<tam; i++){
        printf("Digite o valor [%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    //Imprimir
    for(i=0; i<tam; i++){
        printf("%d ", vetorA[i]);
    }
    return 0;
}
