#include <stdio.h>
int main() {
    int valores[6], i;

    for(i = 0; i < 6; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &valores[i]);
    }
    printf("Numeros na ordem inversa:\n");
    for(i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }
    return 0;
}