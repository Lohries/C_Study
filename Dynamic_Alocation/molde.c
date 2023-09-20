#include <stdio.h>
#include <stdlib.h>
void aloca(int **p, int tam); //passa o endereço do ponteiro declarado na main
main( )
{
    int *ptr=NULL;
    printf("\nAloca memoria na Funcao e na Main\n");
    printf("\nChamada por Referencia - passa ENDERECO do ponteiro\n");
    printf("\nMain - antes de alocar");
    printf("\nEndereco ptr = %u - Conteudo ptr = %u",&ptr,ptr);
    aloca(&ptr, 1); //chamada por referencia
    printf("\n\nMain - depois de alocar");
    printf("\nEndereco ptr = %u - Conteudo ptr = %u\n\n\n",&ptr,ptr);
    system("pause");
}//main
void aloca(int **p, int tam)
{
    printf("\n\nFuncao - antes de alocar");
    printf("\nEndereco p = %u - Conteudo p = %u (Endereço ptr) - Conteudo ptr = %u",&p,p,*p);
    if((*p=(int*)realloc(*p, tam*sizeof(int)))== NULL)
        exit(1); //sai da função e do programa
    printf("\n\nFuncao - depois de alocar");
    printf("\nEndereco p = %u - Conteudo p = %u (Endereço ptr) – Conteudo ptr = %u",&p,p,*p);
}//aloca

