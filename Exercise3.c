#include <stdio.h>
#include <math.h>
int main() 
{
   int exercicio, num3, num4, n;
   int contador[6] = {0, 0, 0, 0, 0, 0};
   float nota, nota2, n1, n2, total = 0, res, op, val;
   int num = 100;
   int num2 = 99;
   printf("Digite o numero do exercicio: \n");
   scanf("%i", &exercicio);
   switch (exercicio)
   {
   case 1:
    {
        do
        {
            printf("%i \n", num);
            num = num - 2;
        }
        while (num >= 0);
    }
   case 2:
    {

        do
        {
            printf("%i \n", num2);
            num2 = num2 - 2;
        }
        while (num2 >= 0);
    }
   case 3:
    {
        printf("Digite a nota do modulo 1 e depois a do 2 \n");
        do
        {
        printf("Digite a nota");
        scanf("%f", &nota);
        scanf("%f", &nota2);
        }
        while(nota < 0  || nota > 10 || nota2 < 0 || nota2 > 10);
        printf("O  resultado da media foi %f", (nota + nota2)/2);
    }
   case 4:
    {
        do
        {
            printf("Digite um numero \n");
            scanf("%f", &n1);
            res = n1 + res;
            total ++;
            printf("Quer continuar \n");
            scanf("%f", &contador[0]);
        }
            while(contador[0] == 1);
            printf("A media foi de %f \n", res/total);

    }
   case 5:
    {
        printf("Digite os dois numeros \n ");
        scanf("%f", &n1);
        scanf("%f", &n2);
        do
        {
        printf("Qual operacao voce quer executar \n 1-soma \n 2-menos \n 3-div \n 4-mult \n 5-saida \n");
        scanf("%f", &op);
        if (op == 1)
         printf("A conta foi %f \n", n1 + n2);

        if (op == 2)
          printf("A conta foi %f \n", n1 - n2);

        if (op == 3)
           printf("A conta foi %f \n", n1 / n2);

        if (op == 4)
             printf("A conta foi %f \n", n1 * n2);
        }
        while(op != 5);
        printf("Ate mais");
    }
   case 6:
    {
        printf ("Seu saldo atual e de: \n");
        scanf("%f", &n1);
    do
    {
        printf("Digite para a sua operacao bancaria: 1-deposito 2-retirada 3-sair \n");
        scanf("%f", &op);
        if (op == 1)
        {
            printf("Valor a ser adicionado: \n");
            scanf("%f", &val);
            res = val + n1;
            printf("O valor ficou em %f \n", res);
             printf("Digite para a sua operacao bancaria \n");
            scanf("%f", &op);
        }
        if (op == 2)
        {
           printf("Valor a ser retirado: \n");
            scanf("%f", &val);
            res = val - n1;
            printf("O valor ficou em %f \n", res);
             printf("Digite para a sua operacao bancaria \n");
            scanf("%f", &op);
        }

    }
    while (op == 1 || op == 2);
        printf("O valor final ficou em %f", res);
        if (res == 0)
            printf("Conta zerada \n");
        if (res > 0)
            printf("Saldo positivo \n");
        if (res < 0)
            printf("Saldo negativo \n");
    }
   case 7:
    {
      printf("Digite o divisor: \n");
      scanf("%i", &n);
      printf("Digte o intervalo de numeros (menor)\n");
      scanf("%i", &num3);
      printf("Digte o intervalo de numeros (maior)\n");
      scanf("%i", &num4);
      do 
       {  
        num4 = num4 - 1; 
        res = num4 % n;
        if(res == 0)
           printf("%i divisivel \n", num4);
        else
          printf("%i nao divisivel \n", num4 );

        } 
       while (num4 > num3);
       
    }
     case 8:
     { 
       printf("Para votar em JOSE, MARIA e JOAO digite 1, 2 e 3 respectivamente\nPara voto braco/nulo digite 4 ou 5\nPara finalizar a contagem digite 0\n");
       do
       { 
         scanf("%i", &num3);
         if(num3 == 1)
           contador[1] = contador[1] + 1;
         else if(num3 == 2)
           contador[2] = contador[2] + 1;
         else if(num3 == 3)
           contador[3] = contador[3] + 1;
         else if(num3 == 4)
           contador[4] = contador[4] + 1;
         else if(num3 == 5)
           contador[5] = contador[5] + 1;
        } 
         while(num3 != 0);
       total = contador[1] + contador[2] + contador[3] + contador[4] + contador[5];
      printf("Votaram em JOAO %i\nVotaram em MARIA %i\nVotaram em JOSE %i\nVotaram em branco %i\nVotaram nulo %i\n", contador[1], contador[2], contador[3], contador[4], contador[5]);
       if(contador[1] > contador[2] && contador[1] > contador[3])
      {
        printf("JOAO venceu\n");
        res = (contador[1]/total)*100;
        printf("O resultado foi %2.f\n", res);
      }
      else if(contador[2] > contador[1] && contador[2] > contador[3])
      {
        printf("MARIA venceu\n");
        res = (contador[2]/total)*100;
        printf("O resultado foi %2.f\n", res);
      }
      else if(contador[3] > contador[1] && contador[3] > contador[2])
      {
         printf("JOSE venceu\n");   
        res = (contador[3]/total)*100;
        printf("O resultado foi %2.f\n", res);
      }
     }
   }
}
