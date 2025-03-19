#include <stdio.h>

int main() {
    char carac;
    int inte;
    float deci;

    printf("Digite um caracter: ");
    scanf(" %c", &carac); 

    printf("Digite um número inteiro: ");
    scanf("%d", &inte);

    printf("Digite um número decimal: ");
    scanf("%f", &deci);

    printf("%c %d %f\n", carac, inte, deci);

    printf("%c\t%d\t%f\n", carac, inte, deci);

    printf("%c\n%d\n%f\n", carac, inte, deci);

    return 0;
}