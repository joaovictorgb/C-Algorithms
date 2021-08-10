#include <stdio.h>
int main (void)
{
    float raio ;
    float perimetro , area ;
    printf("Informe o valor do raio: ");
    scanf("%f",& raio);
    area = 3.14 * raio * raio ;
    perimetro= 2 * 3,14 * raio ;
    printf("O valor do perimetro e: %.2f\nO valor da area e:%.2f ", perimetro, area);
    return 0;
}
