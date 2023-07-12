#include <stdio.h>

int main()
{
  int exercicio, num, contador, num2, res;
  printf("Digite o numero do seu exercicio: \n");
  scanf("%i", &exercicio);
  switch(exercicio)
  {
    case 1:
    {
      for (contador = 0; contador <= 10; contador ++)
      {
      printf("Digite um numero:\n");
      scanf("%i", &num);
      printf("O dobro e %i\n", num*2);
      }
    break;
    }
    case 2:
    {
      for(contador = 0; contador <= 10; contador ++)
      {
      printf("Digite um numero:\n");
      scanf("%i", &num);
      printf("%i * %i = %i\n", num, contador, num*contador);
      }
    break;
    }
    case 3:
    {
      for(contador = 0; contador <= 10; contador ++)
      {
      printf("Digite um numero:\n");
      scanf("%i", &num);
      if (num == 0)
        printf("O numero %i e nulo\n", num);
      else if (num > 0)
        printf("O numero %i e positivo\n", num);
      else if (num < 0)
        printf("O numero %i e negativo\n", num);

    }

    break;
    }
    case 4:
    {
      printf("Digite um numero inteiro:\n");
      scanf("%i", &num);
      printf("Digite outro numero inteiro:\n");
      scanf("%i", &num2);
      if (num2 == num)
        printf("Nenhum numero entre esses valores \n");
      while (num2 > num)
      {
        printf("Os numeros sao %i \n", num);
        num++;
      }
      while (num2 < num)
      {
        printf("Os numeros sao  %i \n", num2);
        num2++;
      }


    break;
    }
    case 5:
    {
      num2 = 80;
    for (num=12; num < 80 && num2 >= 12; num++)
       {
        num2 = num2 - 2;
        printf("O numero %i foi par \n", num2);
       }
    break;
    }
    case 6:
    {
     for (num=1000; num <= 1000 && num2 >=1; num--)
     {
        num2 = num -1;
        printf("%i \n", num2);
        usleep(5000);
     }
    break;
    }
    case 7:
    {
        for(contador == 1; contador <= 30; contador++)
        {
            printf("Digite a teoria: \n");
            scanf("%i", &num);
            printf("Digite o lab: \n");
            scanf("%i", &num2);
            res = num*0.6 + num2*0.4;
            if (res >= 7)
            printf("Vc foi bem: %i\n", res);
            else if (5 <= res < 7)
            printf("Vc foi mediano: %i\n", res);
            else
            printf("Vc foi mal: %i\n", res);

        }

    }
    break;
    }
  }