#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Prototipação
void menu_mostrar();
void cadastrar_livros();
void pilha_mostrar();
void remover_livros();
void pilha_mostrar();
#define tamanho 2

//Estrutura da Pilha
struct livro{
  int codigo;
  char titulo[50], autor[30];
};
struct tpilha{
	int ini, fim;
	struct livro livros[tamanho];
};

struct tpilha pilha_livros;

int op = 1;

//Função Principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    op = -1;
    while(op != 0){
        system("cls");
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op){
            case 1: cadastrar_livros(); break;
            case 2: remover_livros(); break;
        }
    }
    return 0;
}
//Menu
void menu_mostrar(){
  int opc;
  printf("\n |  1-            Cadastrar os livros.            |");
  printf("\n |  2-              Remover livros                |");
  printf("\n |  3-     Imprimir as informações dos livros.    |");
  printf("\n ");
  printf("\n Digite a opção desejada: ");
  }   


void cadastrar_livros(){
  if(pilha_livros.fim == tamanho){
    printf("\nA pilha está lotada, impossível de empilhar\n");
    
  } else {
    printf("Código do livro: ");
    fflush(stdin);
    scanf("%d", &pilha_livros.livros[pilha_livros.fim].codigo);
    printf("Título do livro: ");
    fflush(stdin);
    gets(pilha_livros.livros[pilha_livros.fim].titulo);
    printf("Autor do livro: ");
    fflush(stdin);
    gets(pilha_livros.livros[pilha_livros.fim].autor);
    pilha_livros.fim++;
  }
}  
void remover_livros(){
	
    if(pilha_livros.ini == pilha_livros.fim  ){
        printf("\nA pilha esta vazia, impossível desimpilhar\n");
        system("pause");
    }else{
    	pilha_livros.livros[pilha_livros.fim].titulo[0] = '0';
    	pilha_livros.livros[pilha_livros.fim].titulo[0] = '\0';
        pilha_livros.livros[pilha_livros.fim].autor[0] = '\0';
        pilha_livros.fim--;
    }
} 
//Procedimento para mostrar os elementos de uma pilha
void pilha_mostrar(){
  int i;
  
  for(i=0; i<pilha_livros.fim; i++){
    printf(" Titulo: %s\n", pilha_livros.livros[i].titulo);
    printf(" Codigo: %d\n", pilha_livros.livros[i].codigo);
    printf(" Autor: %s\n", pilha_livros.livros[i].autor);
  }
}

