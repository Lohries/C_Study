#include <stdio.h>


void consumo (float km, float l); //Declara

int main()  {

    float x, y;
    printf("Digite os km percorridos: ");
    scanf("%f", &x);
    printf("Digite os litros consumidos: "); //Main
    scanf("%f", &y);
    consumo (x, y); //Chama ela

}

void consumo (float km, float l) {
    float resultado = km / l;
    printf("O consumo médio foi de %.2f", resultado);

}

