#include <stdio.h>
int main()// Lista 7
{
  int exercicio, j;
  int k = 0;
  printf("Digite o numero do exercicio: \n");
  scanf("%i", &exercicio);
  int vetor[100], vetor1[100];
  int num;
  int counter = 0;
        switch(exercicio)
        {
            case 1:
            {
                 for(int i = 0; i < 10; i++)
                {
                    printf("Digite o numero q ser inserido \n");
                    scanf("%i", &vetor[i]);
                 }
                for (int j = 0; j < 10; j++)
                 {
                 printf("%i \n", vetor[j]);
                 }
              break;
            }
            case 2:
            {
                    for(int i = 0; i < 10; i++)
                {
                    printf("Digite o numero q ser inserido \n");
                    scanf("%i", &vetor[i]);
                 }
                     for (int j = 10; j > 0; j--)
                     {
                         printf("%i \n", vetor[j]);
                    }
             break;
             }
            case 3:
            {
                     for(int i = 0; i < 8; i++)
                {
                     printf("Digite o numero q ser inserido \n");
                     scanf("%i", &vetor[i]);
                 }
                int j;
                printf("Escolha o vetor para que se veja seu valor \n");
                scanf("%i", &j);
                printf("O vetor foi %i", vetor[j]);
                break;
             }
            case 4:
            {
                    for(int i = 0; i < 15; i++)
                    {
                         printf("Digite o numero q ser inserido \n");
                            scanf("%i", &vetor[i]);
                    }
                    for(int j = 0; j < 15; j++)
                    {
                         printf("%i \n", vetor[j]*2);
                    }
             break;
            }
            case 5:
            {
                    for(int i = 0; i < 12; i++)
                    {
                        printf("Digite o numero q ser inserido \n");
                        scanf("%i", &vetor[i]);

                    }
                     for(int j = 0; j < 12; j++)
                    {
                        if(vetor[j] > 0)
                             printf("%i \n", vetor[j]);
                     }
                 break;
             }
            case 6:
            {
                    for(int i = 0; i < 12; i++)
                    {
                        printf("Digite o numero q ser inserido \n");
                        scanf("%i", &vetor[i]);

                    }
                    for(int j = 0; j < 12; j++)
                    {
                            if(vetor[j] < 0)
                                printf("%i \n", vetor[j]);
                    }
                 break;
            }
            case 7:
             {
                    for(int i = 0; i == 100; i++)
                    {
                        vetor[i] = i;
                        printf("%i \n", vetor[i]);
                    }
                 break;
            }
            case 8:
            {
                for(int i = 0; i < 10; i++)
                {
        
                    printf("Digite um numero para ser inserido");
                   scanf("%i", &j);
                   if (j > 0)
                    vetor[i] = j;
                   else 
                   i--;
                       
                    
                }
                for(int i = 0; i <= 10; i++)
                {
                    printf("%i \n", vetor[i]);
                }
             break;

            }
            case 9:
            {
                for(int i = 0; i < 10; i++)
                {
                    printf("Digite o numero para ser inserido \n");
                    scanf("%i", &vetor[i]);
                }
                printf("Digite um numero:\n");
                scanf("%i", &num);
                for (int j; j < 10; j++)
                {
                    if (vetor[j] == num)
                    {
                        printf("%i \n", vetor[j]);
                        counter = counter + 1;
                    }
                }
                printf("%i vezes \n", counter);
                break;
            }
          case 10:
            {
                for(int i = 0; i < 10; i++)
                {
                  printf("Digite o numero para ser inserido \n");
                  scanf("%i", &vetor[i]);
                }
                for(int i = 10; i = 0; i--)
                {
                  printf("%i  \n ", vetor[i]);
 
                }
                
              
            }
          
    }

}
