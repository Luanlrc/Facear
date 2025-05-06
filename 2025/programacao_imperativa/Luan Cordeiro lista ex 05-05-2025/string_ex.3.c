#include <stdio.h>

int main() {
    char texto[100];
    int i = 0;

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    while(texto[i] != '\0') {
        i++;
    }

    printf("Numero de caracteres: %d\n", i);
    return 0;
}