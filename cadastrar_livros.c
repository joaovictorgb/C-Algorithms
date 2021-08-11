#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct livro{
char titulo[30], autor[30], editora[30];
int edicao, ano;
};
int main(void) {
setlocale(LC_ALL, "Portuguese");
struct livro livros[20];
int i;
     for(i = 0; i < 20; i++) {
     printf("Informe o titulo do %dº livro: ", i+1);
       scanf("%[^\n]", livros[i].titulo);
     fflush(stdin);
     printf("Informe o nome do autor: ");
       scanf("%[^\n]", livros[i].autor);
     fflush(stdin);
     printf("Informe a editora: ");
       scanf("%[^\n]", livros[i].editora);
     fflush(stdin);
     printf("Informe a edição: ");
       scanf("%d", &livros[i].edicao);
     fflush(stdin);
     printf("Informe o ano: ");
       scanf("%d", &livros[i].ano);
     fflush(stdin);
}
    for(i = 0; i < 20; i++) {
      printf("\nLivro %d\n\n", i+1);
      printf("O titulo do livro: %s\n", livros[i].titulo);
      printf("O nome do autor: %s\n", livros[i].autor);
      printf("A editora: %s\n", livros[i].editora);
      printf("Edição: %dª\n", livros[i].edicao);
      printf("O ano: %d\n", livros[i].ano);
    }
return 0;
}
