#include <stdio.h>
#include "library.h"


int main () {
    int num, num2;
    float  num3;
    int op;
    printf("Insira um numero: ");
    scanf("%i", &num);
    fflush(stdin);
    printf("Digite o seu parceiro: ");
    scanf("%i", &num2);
    fflush(stdin);
    printf("Digite o valor correspondente a operacao: ");
    scanf("%i", &op);
    if (op = 1)
        num3 = add(num, num2);

    else if (op = 2)
        num3 = sub(num, num2);

    else if (op = 3)
        num3 = mul(num, num2);

    else
        num3 = div(num, num2);
    printf("O resultado foi de %.2f", num3);
    return 0; 
} 