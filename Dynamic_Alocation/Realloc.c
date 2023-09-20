#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main( )
{
    char buf[80], *mensagem;
    puts("Digite uma linha de texto");
    gets(buf); // recebe um string
    mensagem = (char *) realloc (NULL, strlen (buf )+1);
    strcpy(mensagem, buf );
    puts(mensagem); // exibe a mensagem
    puts("Digite outra linha de texto");
    gets(buf);
    mensagem = (char *) realloc(mensagem, (strlen(mensagem)+strlen(buf)+1)); //aumenta memo
    strcat(mensagem, buf); // concatena o novo string
    puts(mensagem);
}// main
