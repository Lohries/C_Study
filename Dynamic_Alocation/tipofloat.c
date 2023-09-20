#include <stdio.h>
#include <stdlib.h>

int main () {
    float *ptr = NULL;
    int tam = 10;
    printf("Vamor armazenar em uma matriz 10 valores do tipo float \n");
    ptr = ((float *)malloc(tam * sizeof(float)));
    if (ptr == NULL)
        exit(1);
    else
        printf("Alocado");
    
}
