#include<stdio.h>

void main(void){
    int num;
    printf("Vamos verificar o mes conforme o numero digitado\n");
    scanf("%d", &num);

    if(num == 1){
        printf("O mes correspondente e Janeiro");
    }
    else if (num == 2){
        printf("O mes correspondente e Fevereiro");
    }
    else if (num == 3){
        printf("O mes correspondente e Marco");
    }
    else if (num == 4){
        printf("O mes correspondente e Abril");
    }
    else if (num == 5){
        printf("O mes correspondente e Maio");
    }
    else if (num == 6){
        printf("O mes correspondente e Junho");
    }
    else if (num == 7){
        printf("O mes correspondente e Julho");
    }
    else if (num == 8){
        printf("O mes correspondente e Agosto");
    }
    else if (num == 9){
        printf("O mes correspondente e Setembro");
    }
    else if (num == 10){
        printf("O mes correspondente e Outubro");
    }
    else if (num == 11){
        printf("O mes correspondente e Novembro");
    }
    else if (num == 12){
        printf("O mes correspondente e Dezembro");
    }
    else {
        printf("Esta valor nao e valido");
    }
}