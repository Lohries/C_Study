#include <stdio.h>
#include <stdlib.h>

int* aloca (int *p, int size);
int leitura(int *p);
void observar(int *p, int tam);




int main () {
    int *ptr = NULL;
    int tam = 0;
    char op;
    printf("Informacoes dos ponteiros antes de irem na funcao: %u --- %u \n", ptr, &ptr);
    do {
        scanf("%c",&op);
        fflush(stdin);
        printf("Agora vamos alocar \n");
        ptr = aloca(ptr, tam+1);
        printf("Informacoes dos ponteiros antes de irem na funcao: %u --- %u \n", ptr, &ptr);
        *ptr = leitura(ptr);
        printf("Quer continuar \n");
        tam++;
        observar(ptr, tam);
        
    }
    while(op == 's'  || op == 'S');
    
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
    printf("Informacoes dos ponteiros depois de alocar: %u --- %u \n", p, &p);
    return p;

}
int leitura(int *p) {
    printf("Digite um numero para adicionar na lista");
    scanf("%i", p);
    fflush(stdin);
    return p;


}
void observar(int *p, int tam) {
    


}
