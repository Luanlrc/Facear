#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    float altura, aux, aux2, resultado;
    char gen;

    printf("Vamos verificar seu peso ideal? \n");
    printf("\n");

    printf("Voce possui o sexo feminino (f) ou masculino (m):  ");
    scanf("%c", &gen);

    printf("Digite sua altura:  ");
    scanf("%f", &altura);

    if (gen == 'f'){
        aux = 62.1;
        aux2 = 44.7;
        resultado = (aux * altura) - aux2;
        printf("O seu peso ideal e %f\n", resultado);
        return 0;
    }

    if (gen == 'm'){
        aux = 72.7;
        aux2 = 58;
        resultado = (aux * altura) - aux2;

        printf("O seu peso ideal e %f\n", resultado);
        return 0;
    } 

    printf("Este valor nao e valido");

    return 0;
}