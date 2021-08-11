#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr_xi; 
    printf("Endereco ptr_xi: %p\n", ptr_xi);
    ptr_xi = (int *) malloc(sizeof (int));      
    printf("\nEndereco dinamico ptr_xi: %p | Valor: %d\n", ptr_xi, *ptr_xi);
    *ptr_xi = 42;
    printf("\nEndereco dinamico ptr_xi: %p | Valor: %d\n", ptr_xi, *ptr_xi);

}
