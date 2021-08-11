#include <stdio.h>
int teste_char(char c)
{
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' ||
       c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
       c == 'u' || c == 'U')
       return 1;
    else
        return 0;
}
int main()
{
    char c;
    printf("Informe o caractere: ");
    scanf("%s",&c );
    if(teste_char(c))
        printf("\n 1");
    else
        printf("\n 0");
    return 0;
}
