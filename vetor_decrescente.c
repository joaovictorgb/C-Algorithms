#include <stdio.h>
int main(void) {
int vetA[5], i;
    for(i = 0; i < 5; i++) {
    printf("Digite o valor do vetor de A %d de 5: ", i+1);
    scanf("%d", &vetA[i]);
    }
    for(i = 4; i >= 0; i--) {
    printf("%d ", vetA[i]);
    }
    printf("\n");
  return 0;
}
