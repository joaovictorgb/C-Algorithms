#include <stdio.h>
int main(void)
{
  float dep, tjuros,rend, total;
  printf("Digite o valor do deposito :");
  scanf("%f", &dep);
  printf("Digite o valor da taxa de juros :");
  scanf("%f", &tjuros);
  rend = (tjuros/100) * dep;
  printf("Seu rendimento foi de : %.2f \n", rend);
  total = dep+rend;
  printf("E o valor total é : %.2f", total);
  return 0;
}
