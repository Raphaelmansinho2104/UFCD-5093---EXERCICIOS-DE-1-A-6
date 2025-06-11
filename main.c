#include <stdio.h>

void converterHora(int hora24, int minuto, int *hora12, char *periodo) {
    if (hora24 == 0) {
        *hora12 = 12;
        *periodo = 'A';
    } else if (hora24 < 12) {
        *hora12 = hora24;
        *periodo = 'A';
    } else if (hora24 == 12) {
        *hora12 = 12;
        *periodo = 'P';
    } else {
        *hora12 = hora24 - 12;
        *periodo = 'P';
    }
}

void mostrarHora(int hora12, int minuto, char periodo) {
    printf("Hora convertida: %d:%02d %c.M.\n", hora12, minuto, periodo);
}

int main() {
    int hora24, minuto;
    int hora12;
    char periodo;
    char repetir;

    do {

        printf("Digite a hora (0-23): ");
        scanf("%d", &hora24);
        printf("Digite os minutos (0-59): ");
        scanf("%d", &minuto);


        if (hora24 < 0 || hora24 > 23 || minuto < 0 || minuto > 59) {
            printf("Hora ou minutos inválidos.\n");
        } else {

            converterHora(hora24, minuto, &hora12, &periodo);
            mostrarHora(hora12, minuto, periodo);
        }

        // Pergunta se deseja repetir
        printf("Deseja converter outra hora? (S/N): ");
        scanf(" %c", &repetir);

    } while (repetir == 'S' || repetir == 's');

    return 0;
}