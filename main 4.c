#include <stdio.h>

int main(void) {
    char verificaPositivo(int num) {
        if (num > 0) {
            return 'P';

        } else {
            return 'N';
        }
    }


        int numero;

        printf("Digite um número: ");
        scanf("%d", &numero);

        char resultado = verificaPositivo(numero);

        printf("O resultado é: %c\n", resultado);

        return 0;


    }



