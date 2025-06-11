#include <stdio.h>

int main(void) {
    int soma(int num1, int num2, int num3) {
        int res = num1 + num2 + num3;
        return res;
    }

        int num1 = 5;
        int num2 = 8;
        int num3 = 2;

        int res = soma(num1 , num2 , num3);

        printf("A soma de %d, %d e %d é: %d\n", num1 , num2 , num3 , res);

        return 0;
    }