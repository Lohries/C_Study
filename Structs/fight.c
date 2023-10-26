#include <stdio.h>
#include <stdlib.h>

typedef struct luta{
    int regaula; 
    int qaluno;
    char modalidade; 
    int grau; 
    float valor; 
} luta;

typedef struct aluno{
    char CPF[13]; 
    char nome[80]; 
    int numaula; 
} aluno;


void aloca_aluno(aluno **pAlumni, int tam);

void cadastra_aluno(luta *p_luta, aluno *p_aluno, int size);

void cadastra_luta(luta *pA);

void aloca_luta(luta **pA, int size);

int busca_luta(int qsala, luta *fight, aluno *student, char style, int lv);

void mostra (int quantidade, luta *lutinha, aluno *aluninho);


int main () {
    luta *ptr_luta = NULL;
    aluno *ptr_aluno = NULL;
    int tamanho = 9;
    int op;
    int cout = 0;
    aloca_luta(&ptr_luta, tamanho);
    cadastra_luta(ptr_luta);

    do {
        printf("Selecione uma opcao 1-Cadastro 2-Ver 3-Sair");
        scanf("%i", &op);
        fflush(stdin);
        switch(op) {
            
            case 1: {
                aloca_aluno(&ptr_aluno, (cout + 1));
                cadastra_aluno(ptr_luta, ptr_aluno, tamanho);
                break;
            }
            case 2: {
                mostra(tamanho, ptr_luta, ptr_aluno);
                break;


            }
        }

    }
    while(op != 3);
    
    system("pause");
    
}


void aloca_luta(luta **pA, int size) {
    *pA = ((luta*)realloc(*pA, size * sizeof(luta)));
    if (*pA == NULL)
        exit(1);

}

void cadastra_luta(luta *pA) {
    for (int i = 0; i < 15; i++, pA++) {
        pA -> regaula = i + 1;
        if (i < 3) {
            pA -> modalidade = 'B';
            pA -> grau = i + 1;
            pA -> valor = 100;
        }
        else if (i < 6 && i > 3) {
            pA -> modalidade = 'M';
            pA -> grau = i - 2;
            pA -> valor = 200;

        }
        else if (i > 6) {
            pA -> modalidade = 'J';
            pA -> grau = i - 5;
            pA -> valor = 300;
        }
    }
}

void aloca_aluno(aluno **pAlumni, int tam) {
    *pAlumni = ((aluno*)realloc(*pAlumni, tam * sizeof(aluno)));
    if (*pAlumni == NULL)
        exit(1);


}

void cadastra_aluno(luta *p_luta, aluno *p_aluno, int size) {
    char estilo;
    int nivel;
    

    printf("Qual luta você quer praticar ?");
    scanf("%c", &estilo);
    fflush(stdin);
    printf("Qual nivel de luta ?");
    scanf("%i", &nivel);
    fflush(stdin);
    p_aluno -> numaula = busca_luta(size, p_luta, p_aluno, estilo, nivel);
    if (p_aluno -> numaula == -1)
        printf("Nao encontrado");
    else  {
        printf("Sala encontrada, digite seu nome: ");
        gets(p_aluno -> nome);
        fflush(stdin);
        printf("Digite o seu CPF: ");
        gets(p_aluno -> CPF);
        fflush(stdin);

    }

}


int busca_luta(int qsala, luta *fight, aluno *student, char style, int lv) {
    for (int j = 0; j < qsala; j++, fight++) {
        if (style == fight -> modalidade && lv == fight -> grau) 
            return fight -> regaula;
        else 
            return -1;
    }
}


void mostra (int quantidade, luta *lutinha, aluno *aluninho) {
    char dados[13];
    int registro;
    printf("Voce quer encerrar a matricula. Ent digite o seu CPF");
    gets(dados);
    fflush(stdin);
    for (int k = 0; k < quantidade; k++, aluninho++) {
        if (dados == aluninho -> CPF) {
            printf("Aluno encontrado");
            printf("%s", aluninho -> nome);
            registro = aluninho -> numaula;
            for (int z = 0; z < quantidade; z++, lutinha++) {
                if (lutinha -> regaula == registro) {
                    printf("%c", lutinha -> grau);
                    printf("%c", lutinha -> modalidade);

                }



            }
            
            

        }
    }
}



