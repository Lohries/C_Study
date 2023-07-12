#include <stdio.h>
#include <stdlib.h>  // Inclusao das bibliotecas
#include <time.h>
int main()
 {
    char confirmaçao;   //Variavel de iniciacao
    int resposta;  
    int ajuda, univ = 0, eliminate = 0, stop = 0;
    int time1, time2, time3, time4;  //Usado para gerar randomicidade na parte de ajuda
    int contador = 0;
    printf("Vamos participar do show do milhao 2023  \n As regras sao basicas, 16 perguntas ate o milhao, cada uma mais dificil que a outra \n Entao, vamos começar ?  \n S/N\n");
    scanf("%c", &confirmaçao);      //Regras e inicio
    switch (confirmaçao)
    {
        case 'S':  //Saber se vai jogar
        {
            if (contador == 0)  //Contador cuidara da progressao das perguntas
            {
                printf(" 1 - Pergunta valendo 5000 reais  \n Qual é o maior lago do mundo? \n 1-Lago Baikal  2-Lago Vitória\n  3-Lago Ness   4-Lago Superior\n 5-Suporte \n");
                scanf("%i", &resposta);
                if (resposta == 1)
                {
                     printf("Voce esta correto \n"); //Caso de alternativa correta
                     contador = contador + 1;
                 }
                else if (resposta == 5) //Caso de suporte
                {
                    printf("Digite qual ajuda voce quer usar  \n 1-Ajuda dos universitarios\n2-Elimina duas perguntas\n3-Vc pode parar por aqui\n");
                    scanf("%i", &ajuda);
                    if (ajuda == 1)  //Dentro do caso de suporte, primeiro tipo de ajuda
                    {
                        srand(time(0));
                        time1 = (rand() % 6) + 28;
                        time2 = (rand() % 6) + 10;  //Calculo da randomicidade pautado em tempo + Inviezado
                        time3 = (rand() % 6) + 11;
                        time4 = (rand() % 6) + 6;
                        printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);  // Demosntracao dos resultados
                        printf("Qual a alternativa esta correta: \n");
                        scanf("%i", &resposta);
                        univ++;
                    }
                    else if (ajuda == 2)
                    {
                        printf("Duas alternativas vao desaparecer\n");
                        printf("1-Lago Baikal              3-Lago Ness\n");  //Segundo tipo ajuda, eliminacao de duas alternativas
                        scanf("%i", &resposta);
                        eliminate++;
                    }
                    else if (ajuda == 3)
                    {
                        printf("Parabéns, vc vai parar por aqui e ganhar 5000 reais !!!\n");  //Parada
                        stop++;
                    }
                    if (resposta == 1)
                    {
                        printf("Voce esta correto \n");
                        contador = contador + 1;
                    }
                    else
                        printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            if(contador == 1)
            {
                printf(" 2 - Pergunta valendo 10000 reais  \n Qual é o nome do primeiro satélite artificial da Terra? \n1-Sputnik 1    2-Explorer 1\n3-Vanguard 1    4-Tiros 1\n5-Suporte\n");
                scanf("%i", &resposta);
                if (resposta == 1)
                {
                    printf("Voce esta correto\n");
                    contador = contador + 1;
                } 
                else if (resposta == 5)
                {
                    printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                    scanf("%i", &ajuda);
                    if (ajuda == 1 && univ != 1)
                    {
                        srand(time(0));
                        time1 = (rand() % 6) + 28;
                        time2 = (rand() % 6) + 18;
                        time3 = (rand() % 6) + 18;
                        time4 = (rand() % 6) + 6;
                        printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                        printf("Qual a alternativa esta correta: \n");
                        scanf("%i", &resposta);
                        univ++;
                    }
                    else if (ajuda == 2 && eliminate != 1)
                    {
                        printf("Duas alternativas vao desaparecer\n");
                        printf("1-Sputnik              3-Vanguard 1\n");
                        scanf("%i", &resposta);
                        eliminate++;
                    }
                    else if (ajuda == 3 && stop!= 1)
                    {
                        printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                        stop++;
                    }
                    if (resposta == 1)
                    {
                        printf("Voce esta correto \n");
                        contador = contador + 1;
                    }
                    else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            if(contador == 2)
            {
                printf(" 3 - Pergunta valendo 20000 reais  \nQual é o principal ingrediente da bebida chamada caipirinha?\n1-Vodka        2-Cachaça\n3-Rum           4-Tequila\n5-Suporte\n");
                scanf("%i", &resposta);
                if (resposta == 2)
                {
                    printf("Voce esta correto\n");
                    contador = contador + 1;
                } 
                else if (resposta == 5)
                {
                    printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                    scanf("%i", &ajuda);
                    if (ajuda == 1 && univ != 1)
                    {
                        srand(time(0));
                        time1 = (rand() % 6) + 7;
                        time2 = (rand() % 6) + 28;
                        time3 = (rand() % 6) + 11;
                        time4 = (rand() % 6) + 6;
                        printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                        printf("Qual a alternativa esta correta: \n");
                        scanf("%i", &resposta);
                        univ++;
                    }
                    else if (ajuda == 2 && eliminate != 1)
                    {
                        printf("Duas alternativas vao desaparecer\n");
                        printf("1-Vodka             2-Cachaça\n");
                        scanf("%i", &resposta);
                        eliminate++;
                    }
                    else if (ajuda == 3 && stop!= 1)
                    {
                        printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                        stop++;
                    }
                    if (resposta == 2)
                    {
                        printf("Voce esta correto \n");
                        contador = contador + 1;
                    }
                    else
                        printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            if(contador == 3)
            {
                printf(" 4 - Pergunta velendo 50000 reais  \n Qual é a cidade mais populosa do Brasil? \n 1-Salvador            2-Rio de Janeiro\n3-Sao Paulo           4-Belo Horizonte\n5-Suporte\n");
                scanf("%i", &resposta);
                if (resposta == 3)
                {
                    printf("Voce esta correto\n");
                    contador = contador + 1;
                }
                else if (resposta == 5)
                {
                    printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                    scanf("%i", &ajuda);
                    if (ajuda == 1 && univ != 1 )
                    {
                        srand(time(0));
                        time1 = (rand() % 6) + 7;
                        time2 = (rand() % 6) + 18;
                        time3 = (rand() % 6) + 21;
                        time4 = (rand() % 6) + 6;
                        printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                        printf("Qual a alternativa esta correta: \n");
                        scanf("%i", &resposta);
                         univ++;
                     }
                    else if (ajuda == 2 && eliminate != 1    )
                    {
                        printf("Duas alternativas vao desaparecer\n");
                        printf("1-Salvador              3-Sao Paulo\n");
                        scanf("%i", &resposta);
                        eliminate++;
                    }
                    else if (ajuda == 3 && stop!= 1  )
                    {
                        printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                        stop++;
                    }
                    if (resposta == 3)
                    {
                        printf("Voce esta correto \n");
                        contador = contador + 1;
                    }
                    else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            if(contador == 4)
            {
                printf(" 5 - Pergunta velendo 75000 reais  \nEm que ano a Segunda Guerra Mundial começou? \n1-1945             2-1938\n3-1917             4-1939\n5-Suporte");
                scanf("%i", &resposta);
                if (resposta == 4)
                {
                    printf("Voce esta correto\n");
                    contador = contador + 1;
                }
                else if (resposta == 5)
                {
                    printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                    scanf("%i", &ajuda);
                    if (ajuda == 1 && univ != 1 )
                    {
                        srand(time(0));
                        time1 = (rand() % 6) + 7;
                        time2 = (rand() % 6) + 18;
                        time3 = (rand() % 6) + 21;
                        time4 = (rand() % 6) + 28;
                        printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                        printf("Qual a alternativa esta correta: \n");
                        scanf("%i", &resposta);
                        univ++;
                    }
                    else if (ajuda == 2 && eliminate != 1 )
                    {
                        printf("Duas alternativas vao desaparecer");
                        printf("1-1945              3-1939\n");
                        scanf("%i", &resposta);
                        eliminate++;
                    }
                    else if (ajuda == 3 && stop!= 1 )
                    {
                        printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    }
                    if (resposta == 4)
                    {
                        printf("Voce esta correto \n");
                        contador = contador + 1;
                    }
                    else
                        printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }  
            if(contador == 5)
            {
                printf( " 6 - Pergunta velendo 100000 reais  \nQual é o nome dado ao conjunto de números que aparece com mais frequência em uma lista?\n1-Media            2-Mediana\n3-Moda             4-Desvio padrao\n5- Suporte");
                scanf("%i", &resposta);
                if (resposta == 3)
                {
                    printf("Voce esta correto\n");
                    contador = contador + 1;
                } 
                else if (resposta == 5)
                {
                    printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                    scanf("%i", &ajuda);
                    if (ajuda == 1 && univ != 1 )
                    {
                        srand(time(0));
                        time1 = (rand() % 6) + 7;
                        time2 = (rand() % 6) + 18;
                        time3 = (rand() % 6) + 21;
                        time4 = (rand() % 6) + 6;
                        printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                        printf("Qual a alternativa esta correta: \n");
                        scanf("%i", &resposta);
                        univ++;
                    }
                    else if (ajuda == 2 && eliminate != 1   )
                    {
                    printf("Duas alternativas vao desaparecer");
                    printf("1-Media              3-Moda\n");
                    scanf("%i", &resposta);
                    eliminate++;
                    }
                    else if (ajuda == 3 && stop!= 1)
                    {
                    printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    stop++;
                    }
                    if (resposta == 3)
                    {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                    }
                    else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            if(contador == 6)
            {
                printf(" 7 - Pergunta valendo 100000 reais  \nQual é o nome do personagem principal do livro O Apanhador no Campo de Centeio?\n1-Holden Caulfield            2-Jay Gatsby\n3-Winston Smith               4-Humbert Humbert\n5-Suporte");
                scanf("%i", &resposta);
                if (resposta == 1)
                {
                    printf("Voce esta correto\n");
                    contador = contador + 1;
                }
                else if (resposta == 5)
                {
                    printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                    scanf("%i", &ajuda);
                    if (ajuda == 1 && univ != 1)
                    {
                        srand(time(0));
                        time1 = (rand() % 6) + 30;
                        time2 = (rand() % 6) + 18;
                        time3 = (rand() % 6) + 21;
                        time4 = (rand() % 6) + 6;
                        printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                        printf("Qual a alternativa esta correta: \n");
                        scanf("%i", &resposta);
                        univ++;
                    }
                    else if (ajuda == 2 && eliminate != 1       )
                    {
                        printf("Duas alternativas vao desaparecer");
                        printf("1-Holden Caufield              2-Jay Gatsby\n");
                        scanf("%i", &resposta);
                        eliminate++;
                    }
                    else if (ajuda == 3  && stop!= 1      )
                    {
                        printf("Parabens, vc vai parar por aqui e ganhar 10000 reais !!!");
                        stop++;
                    }
                    if (resposta == 1)
                    {
                        printf("Voce esta correto \n");
                        contador = contador + 1;
                    } 
                    else
                        printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");

            }
       if(contador == 7)
        {
            printf(" 8 - Pergunta velendo 150000 reais  \nQual é o nome da montanha mais alta do sistema solar?\n1- Monte Kilimanjaro               2-Monte Everest\n3-Monte Fuji                     4-Monte Denali\n5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 2)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            } 
            else if (resposta == 5)
            {
                printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                scanf("%i", &ajuda);
                if (ajuda == 1 && univ != 1          )
                {
                    srand(time(0));
                    time1 = (rand() % 6) + 7;
                    time2 = (rand() % 6) + 18;
                    time3 = (rand() % 6) + 21;
                    time4 = (rand() % 6) + 6;
                    printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                    printf("Qual a alternativa esta correta: \n");
                    scanf("%i", &resposta);
                    univ++;
                }
                else if (ajuda == 2   && eliminate != 1 )
                {
                    printf("Duas alternativas vao desaparecer");
                    printf("2-Monte Everest              3-Monte Fuji\n");
                    scanf("%i", &resposta);
                    eliminate++;
                }
                else if (ajuda == 3   && stop!= 1     )
                {
                    printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    stop++;
                }
                if (resposta == 2)
                {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            else
                printf("Voce errou e perdeu a grande chance de ser um milionario\n");
        }
       if(contador == 8)
        {
            printf(" 9 - Pergunta velendo 200000 reais  \nQual é o nome da cidade conhecida como a Cidade do Pecado?\n1-Los Angeles              2-Nova York\n3-Las Vegas                4-Miami\n5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 3)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            } 
            else if (resposta == 5)
            {
                printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                scanf("%i", &ajuda);
                if (ajuda == 1 && univ != 1          )
                {
                    srand(time(0));
                    time1 = (rand() % 6) + 7;
                    time2 = (rand() % 6) + 18;
                    time3 = (rand() % 6) + 21;
                    time4 = (rand() % 6) + 6;
                    printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                    printf("Qual a alternativa esta correta: \n");
                    scanf("%i", &resposta);
                    univ++;
                }
                else if (ajuda == 2  && eliminate != 1       )
                {
                    printf("Duas alternativas vao desaparecer");
                    printf("3-Las vegas              4-Miami\n");
                    scanf("%i", &resposta);
                    eliminate++;
                }
                else if (ajuda == 3   && stop!= 1 )
                {
                    printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    stop++;
                }
                if (resposta == 3)
                {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            else
                printf("Voce errou e perdeu a grande chance de ser um milionario\n");
        }
        if(contador == 9)
        {
            printf(" 10 - Pergunta velendo 250000 reais  \nEm que país está localizado o Museu do Louvre?\n1-Alemanha           2-Espanha\n3-França             4-Italia\n5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 3)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            } 
            else if (resposta == 5)
            {
                printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                scanf("%i", &ajuda);
                if (ajuda == 1 && univ != 1  )
                {
                    srand(time(0));
                    time1 = (rand() % 6) + 7;
                    time2 = (rand() % 6) + 18;
                    time3 = (rand() % 6) + 21;
                    time4 = (rand() % 6) + 6;
                    printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                    printf("Qual a alternativa esta correta: \n");
                    scanf("%i", &resposta);
                    univ++;
                }
                else if (ajuda == 2  && eliminate != 1  )
                {
                    printf("Duas alternativas vao desaparecer");
                    printf("1-Alemanha              3-França\n");
                    scanf("%i", &resposta);
                    eliminate++;
                }
                else if (ajuda == 3  && stop!= 1        )
                {
                    printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    stop++;
                }
                if (resposta == 3)
                {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            else
             printf("Voce errou e perdeu a grande chance de ser um milionario\n");
        }
        if(contador == 10)
        {
            printf(" 11 - Pergunta velendo 300000 reais  \nQual é o nome da primeira mulher a ser premiada com um Prêmio Nobel?\n1-Marie Curie               2-Rosalind Franklin\n-Ada Lovelace              4-Dorothy Hodgkin\n5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 2)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            } 
            else if (resposta == 5)
            {
                printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                scanf("%i", &ajuda);
                if (ajuda == 1 && univ != 1 )
                {
                    srand(time(0));
                    time1 = (rand() % 6) + 7;
                    time2 = (rand() % 6) + 28;
                    time3 = (rand() % 6) + 21;
                    time4 = (rand() % 6) + 6;
                    printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                    printf("Qual a alternativa esta correta: \n");
                    scanf("%i", &resposta);
                    univ++;
                 }
                else if (ajuda == 2 && eliminate != 1)
                {
                    printf("Duas alternativas vao desaparecer");
                    printf("1-Marie Currie              2-Rosalind Franklin\n");
                    scanf("%i", &resposta);
                    eliminate++;
                }
                else if (ajuda == 3  && stop!= 1)
                {
                    printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    stop++;
                }
                if (resposta == 2)
                {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            else
                printf("Voce errou e perdeu a grande chance de ser um milionario\n");
        }
        if(contador == 11)
        {
            printf(" 12 - Pergunta velendo 400000 reais  \nQual é o nome da unidade básica de informação utilizada em computação?\n1-Bit                   2-Mrgabyte\n3-Kilobyte              4-Byte\n5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 4)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            }
            else if (resposta == 5)
            {
            printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
            scanf("%i", &ajuda);
            if (ajuda == 1 && univ != 1 )
            {
                srand(time(0));
                time1 = (rand() % 6) + 7;
                time2 = (rand() % 6) + 18;
                time3 = (rand() % 6) + 21;
                time4 = (rand() % 6) + 21;
                printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                printf("Qual a alternativa esta correta: \n");
                scanf("%i", &resposta);
                univ++;
            }
            else if (ajuda == 2 && eliminate != 1)
            {
                printf("Duas alternativas vao desaparecer");
                printf("3-Kilobyte              4-Byte\n");
                scanf("%i", &resposta);
                eliminate++;
            }
            else if (ajuda == 3    && stop!= 1)
            {
                printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                stop++;
            }
            if (resposta == 4)
            {
                printf("Voce esta correto \n");
                contador = contador + 1;
            }
            else
                printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
        }
        if(contador == 12)
        {
            printf(" 13 - Pergunta velendo 450000 reais  \nQual é o nome do primeiro homem a pisar na Lua?\n1-Neil Armstrong               2-Michael Collins\n3-Buzz Aldrin                  4-Yuri Gagarin\n5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 1)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            } 
            else if (resposta == 5)
            {
                printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                scanf("%i", &ajuda);
                if (ajuda == 1 && univ != 1 )
                {
                    srand(time(0));
                    time1 = (rand() % 6) + 21;
                    time2 = (rand() % 6) + 18;
                    time3 = (rand() % 6) + 21;
                    time4 = (rand() % 6) + 6;
                    printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                    printf("Qual a alternativa esta correta: \n");
                    scanf("%i", &resposta);
                    univ++;
                }
                else if (ajuda == 2   && eliminate != 1 )
                {
                    printf("Duas alternativas vao desaparecer");
                    printf("1-Niel Armstrong              2-Michael Collins\n");
                    scanf("%i", &resposta);
                    eliminate++;
                }
                else if (ajuda == 3   && stop!= 1 )
                {
                    printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    stop++;
                }
                if (resposta == 1)
                {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            else
                printf("Voce errou e perdeu a grande chance de ser um milionario\n");
        }
        if(contador == 13)
        {
            printf(" 14 - Pergunta velendo 500000 reais  \nQual é o nome do autor de Cem Anos de Solidão?\n1-Gabriel García Márquez               2-Julio Cortázar\n3-Mario Vargas Llosa                   4-Pablo Neruda\n5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 1)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            } 
            else if (resposta == 5)
            {
                printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                scanf("%i", &ajuda);
                if (ajuda == 1  && univ != 1          )
                {
                    srand(time(0));
                    time1 = (rand() % 6) + 25;
                    time2 = (rand() % 6) + 18;
                    time3 = (rand() % 6) + 21;
                    time4 = (rand() % 6) + 6;
                    printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                    printf("Qual a alternativa esta correta: \n");
                    scanf("%i", &resposta);
                    univ++;
                }
                else if (ajuda == 2  && eliminate != 1      )
                {
                    printf("Duas alternativas vao desaparecer");
                    printf("1-Gabriel Garcia Marquez              2-Julio Cortaz\n");
                    scanf("%i", &resposta);
                    eliminate++;
                }
                else if (ajuda == 3   && stop!= 1      )
                {
                    printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    stop++;
                }
                if (resposta == 1)
                {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
            }
            else
                printf("Voce errou e perdeu a grande chance de ser um milionario\n");
        }
        if(contador == 14)
        {
            printf(" 15 - Pergunta valendo 700000 reais  \nQual é o nome da ciência que estuda a vida e os organismos vivos?\n1-Biologia               2-zoologia\n3-Microbiologia          4-Paleantologia\n5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 1)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            }
            else if (resposta == 5)
            {
                printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                scanf("%i", &ajuda);
                if (ajuda == 1 && univ != 1)
                {
                    srand(time(0));
                    time1 = (rand() % 6) + 16;
                    time2 = (rand() % 6) + 18;
                    time3 = (rand() % 6) + 21;
                    time4 = (rand() % 6) + 6;
                    printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                    printf("Qual a alternativa esta correta: \n");
                    scanf("%i", &resposta);
                    univ++;
                }
                else if (ajuda == 2   && eliminate != 1     )
                {
                    printf("Duas alternativas vao desaparecer");
                    printf("1-Biologia              3-Microbiologia\n");
                    scanf("%i", &resposta);
                    eliminate++;
                }
                else if (ajuda == 3   && stop!= 1      )
                {
                    printf("Parabéns, vc vai parar por aqui e ganhar 10000 reais !!!");
                    stop++;
                }
                if (resposta == 1)
                {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
            else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
        }
        if(contador == 15)
        {
            printf(" 16 - Pergunta valendo 1000000 reais  \nQual é a velocidade da luz no vácuo?\n1-299.792.458 metros por segundo               2-300.000.000 metros por segundo\n3-299.792.458 quilômetros por segundo          4-300.000.000 quilômetros por segundo\5- Suporte");
            scanf("%i", &resposta);
            if (resposta == 1)
            {
                printf("Voce esta correto\n");
                contador = contador + 1;
            } 
            else if (resposta == 5)
            {
                printf("Digite qual ajuda voce quer usar  \n1-Ajuda dos universitarios  \n 2-Elimina duas perguntas  \n3-Vc pode parar por aqui      \n");
                scanf("%i", &ajuda);
                if (ajuda == 1 && univ != 1       )
                {
                    srand(time(0));
                    time1 = (rand() % 6) + 20;
                    time2 = (rand() % 6) + 18;
                    time3 = (rand() % 6) + 21;
                    time4 = (rand() % 6) + 6;
                    printf("A-%i  \nB-%i   \nC-%i  \nD-%i\n", time1, time2, time3, time4);
                    printf("Qual a alternativa esta correta: \n");
                    scanf("%i", &resposta);
                    univ++;
                }
                else if (ajuda == 2  && eliminate != 1      )
                {
                    printf("Duas alternativas vao desaparecer");
                    printf("1-299.792.458 metros por segundo               2-300.000.000 metros por segundo\n");
                    scanf("%i", &resposta);
                    eliminate++;
                }
                else if (ajuda == 3   && stop!= 1      )
                {
                    printf("Parabéns, vc vai parar por aqui e ganhar 700000 reais !!!");
                    stop++;
                }
                if (resposta == 1)
                {
                    printf("Voce esta correto \n");
                    contador = contador + 1;
                }
                else
                    printf("Voce errou e perdeu a grande chance de ser um milionario\n");
                }
            else
                printf("Voce errou e perdeu a grande chance de ser um milionario\n");
        }
          break;
    }
    case 'N':
    {
        printf("......");
        break;
    }
  }
}