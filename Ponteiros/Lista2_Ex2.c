#include <stdio.h>
int main() {
    int  mat[50], contador = 0, *prt;
    char confirm;
    prt = mat;

    do { 
        printf("Qual elemento sera inserido: ");
        scanf("%i", prt);
        printf("elemento %i: %i memeoria: %i ", contador, *prt, prt);
        prt++;
        contador++;
        printf("Voce quer continuar: ");
        scanf("%s", &confirm);
    }
    while(confirm == 'S');
    return 0;

}
