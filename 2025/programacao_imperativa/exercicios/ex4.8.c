#include <stdio.h>
#include <string.h>

int main(){
    int idade;

    printf("Vamos verificar em qual categoria o nadador se encaixa: \n");
    printf("Digite a idade do nadador\n");
    scanf("%d", &idade);

    if (idade > 0 && idade < 5){
        printf("Ainda nao a idade suficiente para ser qualificado");
    } 
    else if (idade>=5 && idade <= 7){
        printf("Esta qualificado como infantil A de 5 a 7 anos");
    }
    else if (idade>=8 && idade <= 10){
        printf("Esta qualificado como infantil B de 8 a 10 anos");
    }
    else if (idade>=11 && idade <= 13){
        printf("Esta qualificado como Juvenil A de 11 a 13 anos");
    }
    else if (idade>=14 && idade <= 17){
        printf("Esta qualificado como Juvenil B de 14 a 17 anos");
    }
    else if (idade>=18 && idade <= 120){
        printf("Esta qualificado como Senior maiores de 18 anos");
    }
    else if (idade > 120){
        printf("Infelizmente ainda não vivemos tanto assim");
    }
    else{
        printf("Por favor digite o valor valido");
    }
    return 0;
}