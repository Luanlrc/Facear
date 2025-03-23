#include <stdio.h>

int main() {
    int numero;
    float num1,num2;

    printf("Essa é uma calculadora, as opcoes de calculos sao: \n 1 : Soma \n 2: Subtracao \n 3: Multiplicacao \n 4: Divisao \n Por favor escolha uma:\n");
    scanf("%d", &numero);

    printf("Otimo! Digite dois numeros para fazermos o calculo:\n");
    scanf("%f %f", &num1, &num2);

    switch (numero) {
        case 1:
            printf("Resultado para Soma: %.2f", num1+num2);
            break;
        case 2:
            printf("Resultado para Subtracao: %.2f", num1-num2);
            break;
        case 3:
            printf("Resultado para Multiplicacao: %.2f", num1*num2);
            break;
        case 4:
            printf("Resultado para Divisao: %.2f", num1/num2);
            break;
    }

    return 0;
}
