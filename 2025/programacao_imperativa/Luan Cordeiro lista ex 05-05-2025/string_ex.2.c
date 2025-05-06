#include <stdio.h>

int main() {
    char texto[100];

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    printf("As 4 primeiras letras: %.4s\n", texto);

    return 0;
}