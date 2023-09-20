#include <stdio.h>
#include <stdlib.h>

void aloca(int *ptr, int tam);

int main() {
    int tam = 50;
    int *ptr = NULL;
    printf("Vamos analisar o ponteiro, Endereço-%i  Aponta-%i \n", &ptr, ptr);
    printf("Vamos reservarnesses espaços: \n");
    aloca(ptr, tam);
    free(ptr);

        
    

}

void aloca(int *ptr, int tam) {
    ptr = ((int *)malloc(tam * sizeof(int)));
    if (ptr == NULL) 
        exit(1);
    else
        printf("Armazenado \n");
    printf("Vamos analisar o ponteiro, Endereço-%i  Aponta-%i \n", &ptr, ptr);
    
}
