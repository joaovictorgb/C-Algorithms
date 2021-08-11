#include <stdio.h>
int main ()
{
float celsius,fahrenheit;
     printf("Digite a temperatura em celsius: \n");
     scanf("%f", & celsius);
    fahrenheit=(1.8*celsius)+32;
     printf("A temperatura em Fahrenheit é: \n%.2f", fahrenheit);
return 0;
}
