#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    char nome[40];
    int idade;
    float nota;
} aluno;

void aloca(aluno **p, int tam);

int main() {
    char op;
    int count = 0;
    aluno *registro = NULL; 
    do {
        printf("Quer continuar o processo (S/N): ");
        scanf(" %c", &op); 
        fflush(stdin);
        if (op == 'S' || op == 's') {
            aloca(&registro, (count + 1));
            printf("Nome: ");
            scanf(" %s", registro[count].nome); 
            printf("Idade: ");
            scanf("%d", &registro[count].idade);
            printf("Nota: ");
            scanf("%f", &registro[count].nota);
            count++;
        }
    } while (op != 'N' && op != 'n'); 
    

    for (int i = 0; i < count; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", registro[i].nome);
        printf("Idade: %d\n", registro[i].idade);
        printf("Nota: %.2f\n", registro[i].nota);
    }
    
   
    free(registro);

    return 0;
}

void aloca(aluno **p, int tam) {
    *p = (aluno *)realloc(*p, tam * sizeof(aluno));
    if (*p == NULL)
        exit(1);
}

