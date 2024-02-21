#include <stdio.h>
#include <stdlib.h>


void realloc((int grau, int **p );


int main () {
    int grau;
    int *ptr = NULL;
    printf("Insert your function \n What is the exp of x ?");
    scanf("%i", &grau);
    realloc((grau), &ptr);
    for (int i = grau; i < 0; i--) {

        printf("Digite o valor do coeficiente ligado a variavel de grau %i", i);
        scanf("%i", ptr);
        ptr++;
    }

    free(ptr);


}
void realloc(int grau, int **p ) {
    *p = ((int*)realloc(*p, grau*sizeof(int)))
    if (*p == NULL)
        exit(1);

}

void calculo () {
}
