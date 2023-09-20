#include <stdio.h>
#include <stdlib.h>

void aloca(int **p, int tam); 
void leitura(int *p);

int main() 
{
    int *ptr = NULL;
    char op;
    int cout = 0;
    do {
        printf("Vamos alocar a memoria");
        alocar(&ptr, cout+1);
        leitura(ptr+cout);
        
        printf("Vai querer adicionar mais numeros");
        scanf("%c", &op);
    }
    while(op == 's' || op == 'S');
}

void aloca(int **p, int tam) { 
    *p = ((int *)realloc(*p, tam * sizeof(int)));
    if (*p == NULL)
        exit(1);
    else 
        printf("Alocado");

}
void leitura(int *p) {
    printf("Digite um valor, Endereço: %u", p);
    scanf("%i", p);

}