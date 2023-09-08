#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[100], vetor2[100], vetor3[100], *prt, *prt2, *prt3;
    prt = vetor;
    prt2 = vetor2;
    prt3 = vetor3;
    for (int i = 0; i < 5; i++, prt++, prt2++, prt3++) {

        printf("Digite um valor a ser armazenado no primeiro vetor: ");
        scanf("%f", prt);
        printf("Digite um valor a ser armazenado no segundo vetor: ");
        scanf("%f", prt2);
        *prt3 = *prt + *prt2;

    }
    prt3 = vetor3;
    for (int j = 0; j < 5; j++, prt3++) {

        printf("Elemento %i - %2.f", j, *prt3);
       

    }


}
