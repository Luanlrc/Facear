#include <stdio.h>

int main() {
    double num;

    printf("Digite um numero real utilizando (ponto): \n");
    scanf("%lf", &num);
    
    printf("Numero em notacao cientifica: %e\n", num);
    
    return 0;
}