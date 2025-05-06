#include <stdio.h>
int main() {
    int valores[6], i;

    for(i = 0; i < 6; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &valores[i]);
    }
    printf("Numeros Digitados:\n");
    for(i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }
    return 0;
}