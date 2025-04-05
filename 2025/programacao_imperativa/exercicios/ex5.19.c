#include <stdio.h>

int main() {
    int numerador, denominador;
    double S = 0.0;

    numerador = 1;
    denominador = 1;

    while (numerador <= 99 && denominador <= 55) {
        S += (double)numerador / denominador;
        numerador += 2;
        denominador++;
    }

    printf("Valor de S: %.4f\n", S);
    return 0;
}
