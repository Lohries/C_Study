#include <stdio.h>
#include <stdlib.h>
char contagem, *ptr, *p;
int main( )
{
ptr = (char *) malloc(27 * sizeof(char));
    if (ptr == NULL)
        printf("Erro na alocação de memória.");
    else
    {
        p = ptr; // p é um ponteiro usado para avançar através do string, pois ptr deve.
        //permanecer apontando para o início.
        for (contagem = 65; contagem < 91; contagem++, *p++)
            *p = contagem;
        *p = '\0'; // acrescenta o caractere null de encerramento.
        puts(ptr);
    }//else
}