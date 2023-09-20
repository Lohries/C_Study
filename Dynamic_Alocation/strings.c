#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *str = NULL;
    
    printf("Vamos analisar os dados do ponteiro - Endereço: %i - Apontando: %i \n", &str, str);
    str = (char*) malloc(100);
    if (str == NULL) {
        exit(1);
    }
    else {
        printf("Vamos analisar os dados do ponteiro - Endereço: %i - Apontando: %i \n", &str, str);
    

    }
    
    

}
