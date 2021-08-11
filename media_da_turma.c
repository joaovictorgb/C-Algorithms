#include <stdio.h>
int main(void) {
int i, j;
float nota, ma, mt;
     for(i = 1; i <= 20; i++) {
     ma = 0;
     printf("Digite as 4 notas do %d aluno\n\n", i);
     for(j = 1; j <= 4; j++) {
     printf("Digite a Nota %d: ", j); 
     scanf("%f", &nota);
     ma += nota;
    }
     ma /= 4;
     printf("A media do %d aluno foi : %.1f\n\n", i, ma);
     mt += ma;
    }
     mt /= 20;
     printf("A Media da turma foi: %.1f", mt);
  return 0;
}
