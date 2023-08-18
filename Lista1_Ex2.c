#include <stdio.h>


void media (float a, float b);

int main()  {

    float nota, nota2;
    printf("Digite os numeros: ");
    scanf("%f", &nota);
    scanf("%f", &nota2);
    media (nota, nota2);

}

void media (float a, float b) {
    float resultado = (a + b)/2;
    printf("%.2f", resultado);

}

