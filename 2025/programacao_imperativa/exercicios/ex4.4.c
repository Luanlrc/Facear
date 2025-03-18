#include <stdio.h>
#include <string.h>

int main(){
    float salario, prestacao;

    printf("Vamos fazer o simulado para um emprestimo? \n");
    printf("\n");
    printf("Digite o valor da prestacao desejado:  ");
    scanf("%f", &salario);

    printf("Digite o valor do emprestimo desejado:\n");
    scanf("%f", &prestacao);

    if (salario*0.2 > prestacao){
        printf("Emprestimo nao concedido!!!\n");
    } else {
        printf("Emprestimo concedido, parabens!!!\n");
    }

    return 0;
}