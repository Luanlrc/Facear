#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero (numero de posicoes para deslocamento): ");
    scanf("%d", &numero2);

    // multiplica numero1 * 2 elevado a numero2
    int deslocamento_esquerda = numero1 << numero2;

    // divide numero1 / 2 elevado a numero2
    int deslocamento_direita = numero1 >> numero2;

    printf("Resultado do deslocamento a esquerda: %d\n", deslocamento_esquerda);
    printf("Resultado do deslocamento a direita: %d\n", deslocamento_direita);

    return 0;
}
