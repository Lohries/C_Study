#include <stdio.h>
#include <math.h>


int fatorial (float numero);

int main()  {

    float num;
    printf("Digite o numero do fatorial: ");
    scanf("%f", &num);
    float resultado = fatorial (num);
    printf("%.2f", resultado);

}

int  fatorial (float numero) {
    if (numero == 0 || numero == 1)
        return 1;

    else {
        return numero * (numero - 1);

    }

    


}