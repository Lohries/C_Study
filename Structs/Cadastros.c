#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro {
   char nome [40];
   int paginas;
   int registro;
};




int main() {
    char op;
    struct livro cadastro[3];
  
    for (int i = 0; i < 3; i++) {

        printf("\nDigite o nome do livro: ");
        gets(cadastro[i].nome);
        fflush(stdin);

        printf("\nDigite o numero de paginas: ");
        scanf("%i", &(cadastro[i].paginas));
  

        printf("\nDigite o registro: ");
        scanf("%i", &(cadastro[i].registro));



    }
    

    for (int j = 0; j < 3; j++) {
        printf("\nO nome é %s", cadastro[j].nome);
        printf("\nTem %i pagina(s)", cadastro[j].paginas);
        printf("\nO registro é de %f", cadastro[j].registro);
    }

   
}

