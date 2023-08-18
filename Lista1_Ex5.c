#include <stdio.h>
#include <math.h>


void area (float raio);

int main()  {

    float r;
    printf("Digite o raio: ");
    scanf("%f", &r);
    area (r);
    

}

void area (float raio) {
    float pi = 3.14;
    float resultado = 4  * pi * pow(raio, 2);
    printf("%.2f", resultado);

}

