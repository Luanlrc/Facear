#include <stdio.h>
int main() {
    int valores[5], soma = 0, i;
    float media;

    for(i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    media = soma / 5.0;
    printf("Numeros digitados:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", valores[i]);
    }
    printf("Media: %.2f\n", media);
    return 0;
}