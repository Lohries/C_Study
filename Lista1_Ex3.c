#include <stdio.h>


void anos (int a);

int main()  {

    float x;
    printf("Digite sua idade : ");
    scanf("%f", &x);
    soma (x);

}

void anos (int a) {
    int resultado1 = a * 12;
    int resultado2 = a * 365;
    printf("%i e %i", resultado1, resultado2);

}

