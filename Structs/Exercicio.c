#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct banco {
    char nome[40];
    float saldo;
    int registro;

}banco;


void aloca (banco **ptr, int tam);
void cadastro (banco *p);
void mostra (banco *m);
void calculo (banco *c, int index);
int busca(banco *b, int size2);

int main () {
     
    banco *cliente = NULL;
    int cout = 0;
    int op;
    do {
        fflush(stdin);

        printf("\n[1]-Cadastro\n[2]-Deposito\n[3]-Retirada\n[4]-Sair\n\nEscolha uma opcao: ");
        scanf("%i", &op);
        fflush(stdin);

        switch(op) {
         case 1:
            aloca(&cliente, (cout + 1));
            cadastro(cliente);
            mostra(cliente);
            cout++;
            break;
        case 2:
            printf("Vamos adicionar de sua conta \n");
            calculo(cliente, cout);
         
            break;

        case 3:
            printf("Vamos remover de sua conta \n");
            calculo(cliente, cout);
            

            break;

        case 4:
            printf("Saindo da conta ....... \n");
            mostra(cliente);
            exit(1);


            break;

        default:
        break;

        }
    }
    while(op != 4);

}

void aloca (banco **ptr, int tam) {
    *ptr = ((banco *)realloc(*ptr, tam * sizeof(banco)));
    if (*ptr == NULL)
        exit(1);
}

void cadastro (banco *p) {
    fflush(stdin);
    printf("\nDigite um nome: ");
    gets(p -> nome);
    fflush(stdin);
    printf("\nDigite seu saldo: ");
    scanf("%f", &(p -> saldo));
    fflush(stdin);
    printf("\nDigite o numero da conta: ");
    scanf("%i", &(p->registro));
}

void mostra (banco *m) {
    printf("\nCliente %s cadastrado com sucesso! \n O saldo foi de: %.2f", m -> nome, m ->saldo);
    fflush(stdin);

}
void calculo (banco *c, int index) {
    float numero;
    int resultado;

    resultado = busca(c, index);
    for (int j = 0; j < index; j++, c++) {
        if (c->registro == resultado) {
            printf("\nDigite um valor que sera adciondo/retirado \n");
            scanf("%f", &numero);
            fflush(stdin);
            c->saldo += numero;
            printf("\nO usuario %s agora possui %.2f de saldo", c -> nome, c->saldo);
        }
    }

}

int busca (banco *b, int size2) {
    int num;
    do {
        printf("\nDigite o numero da conta:");
        scanf("%i", &num);
        fflush(stdin);
     
        for (int i = 0; i < size2; i++) {
            if (num == b -> registro) {
                printf("\nUsuario encontrado");
                return num;
            }
            else 
                printf("\nNada foi enontrado");
                return 0;
        }
    }
    while(num != b -> registro);


}
