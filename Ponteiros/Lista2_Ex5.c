#include <stdio.h>
#include <stdlib.h>


int main () {
    float vetor[10], *prt, maior;
    prt = vetor;
    
    for (int i = 0; i < 10; i++, prt++) {

        printf("Digite um valor a ser armazenado");
        scanf("%f", prt);
    }
    
    prt = vetor;
    *prt = maior;
    for (int i = 0; i < 10; i++, prt++) {
        
        if (*prt > maior)
            maior = *prt;
            
            
    }
    printf("O maior valor é %f", maior);



}