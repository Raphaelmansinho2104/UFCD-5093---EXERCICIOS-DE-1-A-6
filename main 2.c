#include <stdio.h>

int main(void) {
    void imprimir_padrao(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d\t", j);
            }
            printf("\n");
        }
    }

{
        int n;

        printf("Digite um número inteiro n: ");
        scanf("%d", &n);

        printf("Padrão até a linha %d:\n", n);
        imprimir_padrao(n);

        return 0;
    }
}