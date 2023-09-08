#include <stdio.h>
int main() {
    int i, mat[50], x, *prt;
    prt = mat;
    printf("Qual a quantidade de termos a serem inseridos na matriz: ");
    scanf("%i", &x);
    for (i = 0; x > i; i++) { 
        printf("Qual elemento sera inserido: ");
        scanf("%i", prt);
        printf("elemento %i: %i memeoria: %i ", i, *prt, prt);
        prt++;
    }
    return 0;

}
