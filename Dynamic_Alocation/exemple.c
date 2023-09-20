#include <stdio.h>
#include <stdlib.h>

void aloca(int **p, int tamanho);
void leitura(int *p);

int main()  {
    char op;
    int *ptr = NULL, tam = 0;
    do {
        aloca(&ptr, tam+1);
        leitura(ptr + tam);
        tam = tam + 1;
        printf("\n\nO que o ponteior ptr armazena é %i, %i, %i", &ptr, ptr, *ptr);
        printf("\n\nVc quer armazenar algum valor:");
        scanf("%c", &op);
    }
    while(op != 'n' && op != 'N');
    system("pause");

}

void aloca(int **p, int tamanho) {
    *p = ((int *)realloc(*p, tamanho*sizeof(int)));
    if (*p == NULL) {
        printf("Espaço nao encontrado");
        exit(1);
    
    } 
    printf("\n\nAlocado com sucesso. O local a ser reservado para alocar é %u", *p);

}

void leitura(int *p) {
    printf(" \n\nDigite o numero que sera insserido: ");
    scanf("%i", p);
    fflush(stdin);
    printf("\n\nO valor que esta nesse espaço é: %i", *p);

}