#include <stdio.h>


void soma (float a, float b);

int main()  {

    float x, y;
    printf("Digite os numeros: ");
    scanf("%f", &x);
    scanf("%f", &y);
    soma (x, y);

}

void soma (float a, float b) {
    float resultado = a + b;
    printf("%.2f", resultado);

}

