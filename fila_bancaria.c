#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Prototipação
void menu_mostrar();
void enfileirar_cliente();
void fila_mostrar();
void desenfileirar_cliente();
void fila_mostrar();

#define tamanho 2

//Estrutura da Pilha
struct cliente{
  int codigo;
  char titulo[50], autor[30];
};
struct tfila{
	int dados[tamanho];
	int ini, fim;
	struct cliente clientes[tamanho];
};

struct tfila fila_clientes;

int op = 1;

//Função Principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    op = -1;
    while(op != 0){
        system("cls");
        fila_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op){
            case 1: enfileirar_cliente(); break;
            case 2: desenfileirar_cliente(); break;
            case 3:  break;
		}
    }
    return 0;
}
//Menu
void menu_mostrar(){
  int opc;
  printf("\n |  1-            Cadastrar do Cliente.           |");
  printf("\n |  2-         Remover cliente da Fila.           |");
  printf("\n |  3-                   sair                     |");
  printf("\n ");
  printf("\n Digite a opção desejada: ");
  }   

//CADASTRO DO CLIENTE
void enfileirar_cliente(){
  if(fila_clientes.fim == tamanho){
    printf("\n A fila está lotada, impossível de emfileirar\n");
	system("pause");
  } else {
    printf(" Horario do Cliente: ");
    fflush(stdin);
    scanf("%d", &fila_clientes.clientes[fila_clientes.fim].codigo);
    printf(" Nome  do cliente: ");
    fflush(stdin);
    gets(fila_clientes.clientes[fila_clientes.fim].titulo);
    printf(" ________________: ");
    fila_clientes.fim++;
  }
}  
// REMOVE CLIENTE
void desenfileirar_cliente(){
	
    if(fila_clientes.ini == fila_clientes.fim  ){
        printf("\nA fila esta vazia, impossível desimfilar\n");
        system("pause");
    }else{
    	int i;
        for(i=0; i<tamanho; i++){
            fila_clientes.clientes[i] = fila_clientes.clientes[i+1];
        }
		fila_clientes.dados[fila_clientes.fim] = 0;
        fila_clientes.fim--;
    }
} 
//Procedimento para mostrar os elementos de uma fila
void fila_mostrar(){
  int i;
  
  for(i=0; i<fila_clientes.fim; i++){
    printf(" Cliente: %s\n", fila_clientes.clientes[i].titulo);
    printf(" Horario: %d\n", fila_clientes.clientes[i].codigo);
    printf(" _______: %s\n", fila_clientes.clientes[i].autor);
  }
}
