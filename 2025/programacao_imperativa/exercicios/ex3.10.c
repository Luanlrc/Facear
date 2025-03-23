#include <stdio.h>
#include <time.h>

void main(void){
    float venc1, venc2, venc3, premio;
    premio = 780000.00;
    venc1 = 0.46 * premio;
    venc2 = 0.32 * premio;
    venc3 = 0.26 * premio;

    printf("E os premios para os ganhadores do concuso sao:\n");
    printf("Primeiro colocado: %.2f\n", venc1);
    printf("Segundo colocado: %.2f\n", venc2);
    printf("Terceiro colocado: %.2f\n", venc3);

}
