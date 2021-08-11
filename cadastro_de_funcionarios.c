#include <stdio.h>
struct func {
long int matricula;
char nome[50];
char setor[50];
float salario;
};
int main(void) {
int i;
struct func funcionarios[20];
     for(i = 0; i < 20; i++) {
      printf("Informe os dados do %d funcionario.\n\n", i+1);
      printf("Matricula: "); scanf("%ld", &funcionarios[i].matricula);
      printf("Nome: "); scanf("%s", funcionarios[i].nome);
      printf("Setor: "); scanf("%s", funcionarios[i].setor);
      printf("Salario: "); scanf("%f", &funcionarios[i].salario);
      printf("\n");
    }
long int consulta;
    while(1) {
      printf("\nDigite o numero da matricula para consultar ou 0 para sair do sistema: ");
        scanf("%ld", &consulta);
    if(consulta == 0) break;
    int ver = 0;
    for(i = 0; i < 20; i++) {
    if(consulta == funcionarios[i].matricula) {
    ver = 1;
    printf("Nome: %s\n", funcionarios[i].nome);
    printf("Setor: %s\n", funcionarios[i].setor);
    printf("Salario: %.2f\n", funcionarios[i].salario);
    }
  }
   if(ver == 0) printf("\nMatricula não consta.\n");
  }
return 0;
}
