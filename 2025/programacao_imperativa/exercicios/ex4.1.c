#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Vamos verificar quais dos numeros e o maior\n");
    printf("\n");
    printf("Digite o Primeiro numero:  ");
    scanf("%i", &num1);

    printf("\n");
    printf("Digite o Segundo numero:  ");
    scanf("%i", &num2);

    if (num1 > num2){
        printf("O numero %i ", num1);
        printf("e maior que o numnero %i", num2);
    } else {
        printf("O numero %i ", num2);
        printf("e maior que o numnero %i", num1);
    }
    return 0;
}