#include <stdio.h>

float somaImposto(float taxaImposto, float custo) {
    return custo + (custo * (taxaImposto / 100));
}

int main() {
    float taxa, custoInicial, custoFinal;

    printf("Digite a taxa de imposto (%%): ");
    scanf("%f", &taxa);

    printf("Digite o custo do item: $ ");
    scanf("%f", &custoInicial);

    custoFinal = somaImposto(taxa, custoInicial);

    printf("Custo final com imposto: $ %.2f\n", custoFinal);


    return 0;
}