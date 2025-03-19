#include <stdio.h>

int main() {
    char caracter;

    printf("Digite apenas um caracter, exemplo (a): \n");
    scanf("%c", &caracter);
    
    printf("Caracter digitado como inteiro: %i\n", caracter);
    
    return 0;
}