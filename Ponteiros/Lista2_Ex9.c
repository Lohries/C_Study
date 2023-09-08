#include <stdio.h>
#include <stdlib.h>
int main()  {
    int vetorA[3], *ptr, vetorB[3], *ptrB;
    int j = 3;
    int times = 1;
    ptr = vetorA;
    ptrB = vetorB;
    for (int i = 0; i < 3; i++, ptr++)
    {
        printf("Digite um numero: ");
        scanf("%i", ptr);
    }
    
    ptr = vetorA;

    do {

        do {
            printf("%i#########", *ptr);

            times = *ptr * times;
            printf("%i", times);
            ptr--;
            printf("%i#########", *ptr);

        }
        while(*ptr > 0);
        printf("O fatorial é: %i ", times);
        ptr++;
        j--;
    }
    while(j > 0);
}