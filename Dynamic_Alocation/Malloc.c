#include <stdio.h>
#include <stdlib.h>

int* aloca(int *p,int tam);
main()
{
    int *p = NULL;
    int tam;
    printf("Vamos analisar os dados do ponteiro - Endereço: %i - Apontando: %i \n", &p, p);
    aloca(p,1);
    printf("Vamos analisar os dados do ponteiro - Endereço: %i - Apontando: %i \n", &p, p);
    

}//main
int* aloca(int *p,int tam)
{
    printf("Vamos realocar e achar um espaço para ser reservado \n");
    if (p=(int*)realloc(p,tam*sizeof(int)) == NULL)
        exit(1);
    else
    {
        printf("Memoria realocada com sucesso \n");
        printf("Vamos ver como fica \n Endereço:%i - Apontando:%i \n", &p, p);
    }
    return p;
}//aloca
