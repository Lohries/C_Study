#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[10], *prt, media, soma = 0;
    prt = vetor;
    
    for (int i = 0; i < 10; i++, prt++) {

        printf("Digite um valor a ser armazenado");
        scanf("%f", prt);
    }
    prt = vetor;

   for (int i = 0; i < 10; i++, prt++) {

        soma = soma + *prt;
        
    }
    media = soma/10;
    printf("%2.f", media);



}