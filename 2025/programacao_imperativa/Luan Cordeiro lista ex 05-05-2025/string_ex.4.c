#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i, width;

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    width = strlen(texto);

    for(i = width - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }

    printf("\n");
    return 0;
}