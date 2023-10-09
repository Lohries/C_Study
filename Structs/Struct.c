#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char nome[30];
    int idade;
    float nota;
};

int main() {
    struct cadastro x;

    printf("Digite o nome: ");
    gets(x.nome); 

    printf("Digite a idade: ");
    scanf("%i", &(x.idade)); 

    printf("Digite a nota");
    scanf("%f", &(x.nota));

    printf("O nome é %s", x.nome);
    printf(". Tenho %i anos", x.idade);
    printf(". A nota foi de %f", x.nota);

    return 0;
}

