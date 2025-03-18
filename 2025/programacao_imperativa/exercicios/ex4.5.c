#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    float valor, resultado;

    printf("Vamos verificar se um numero é positivo? \n");
    printf("\n");
    printf("Digite um numero:  ");
    scanf("%f", &valor);

    if (valor > 0){
        resultado = valor * valor;
        printf("O quadrado do numero digitado é %f!!!\n", resultado);

        resultado = sqrt(valor);
        printf("A Raiz quadrada do numero digitado é %f\n", resultado);

    } else {
        printf("O numero digitado nao e um numero positivo");
    }

    return 0;
}