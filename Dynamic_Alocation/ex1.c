#include <stdio.h>
#include <stdlib.h>

int aloca(int **ptr); // Change the function signature

int main() // Add the return type 'int' to main
{
    int *ptr = NULL;
    char op;
    printf("Vamos alocar os numeros escolhidos\n");
    do {
        printf("Voce quer inserir um numero (s/n): ");
        scanf(" %c", &op); // Added space before %c to consume whitespace

        if (op == 's' || op == 'S') {
            if (aloca(&ptr) == 1) {
                printf("Erro na alocação de memória.\n");
                return 1;
            }
        }
    } while (op == 's' || op == 'S');

    // Free the allocated memory
    free(ptr);

    return 0;
}

int aloca(int **ptr) { // Change the function signature
    *ptr = (int *)realloc(*ptr, 1 * sizeof(int)); // Use *ptr to update the pointer
    if (*ptr == NULL)
        return 1; // Return an error code to indicate allocation failure
    else {
        printf("Digite o numero que deseja guardar: ");
        scanf("%d", *ptr); // Use %d to read an integer
        printf("Numero armazenado: %d\n", **ptr); // Use **ptr to access the value
        return 0; // Return 0 to indicate success
    }
}
