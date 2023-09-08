#include <stdio.h>
#include <stdlib.h>


int main()  {
    float vetor[10], *prt, media, soma = 0, maior;
    prt = vetor;
    
    for (int mes = 0; mes < 10; mes++, prt++) {

        printf("Digite o valor da temperatura: ");
        scanf("%f", prt);
    }
    prt = vetor;
   for (int i = 0; i < 10; i++, prt++) {

        soma = soma + *prt;
        
    }
    media = soma/10;
    maior = 0;
    prt = vetor;
    int j = 0;
    for (int i = 0; i < 10; i++, prt++) {
        if (*prt > maior) {
            maior = *prt;
            j++;
        }
        

    }
    printf("A maior temperatura é %2.f no dia %i e a media foi de %2.f", maior, j, media);
    prt = vetor;
    for (int i = 0; i < 10; i++, prt++) {
        if (media > *prt)
            printf("Inferior a média: %2.f ", *prt);
        
    }






}