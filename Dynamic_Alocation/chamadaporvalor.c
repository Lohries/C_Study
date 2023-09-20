#include <stdio.h>
#include <stdlib.h>

int* aloca (int *p, int size);



int main () {
    int *ptr = NULL;
    int tam = 1;
    printf("Informacoes dos ponteiros antes de irem na funcao: %u --- %u \n", ptr, &ptr);
    printf("Agora vamos alocar \n");
    ptr = aloca(ptr, 1);
    printf("Informacoes dos ponteiros antes de irem na funcao: %u --- %u \n", ptr, &ptr);



    system("pause");

}

int* aloca (int *p, int size) {
    printf("Informacoes dos ponteiros antes de alocar: %u --- %u \n", p, &p);
    printf("Vamos alocar usando o realloc");
    p = ((int *)realloc(p, size*sizeof(int)));
    if (p == NULL)
        exit(1);
    else
        printf("Alocado com sucesso");
    return p;


}