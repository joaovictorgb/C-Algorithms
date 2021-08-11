
#include<stdio.h>
#define tamanho 3
int main(){
    //Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id (inteiro);
    struct Semaforo{
        char cor[10];
        int id;
    };
    
    //Crie três variáveis com o tipo definido no item a;
    struct Semaforo lista[tamanho] = {" Vermelho", 1, " Amarelo", 2, " Verde", 3};
    
    struct Semaforo *ptr_s;

    // Inicialize o ponteiro apontando para a primeira variável criada;
    ptr_s = &lista[0];

    // Por meio de operações aritméticas com ponteiros,
	// percorra a memória e imprima o valor de cada uma 
	//das variáveis criadas nesse programa.
    printf("%s - %d\n", (*ptr_s).cor, (*ptr_s).id);
    ptr_s = ptr_s + 1;
    printf("%s - %d\n", (*ptr_s).cor, (*ptr_s).id);
    ptr_s = ptr_s + 1;
    printf("%s - %d\n", (*ptr_s).cor, (*ptr_s).id);
    return 0;
}
