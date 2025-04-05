#include <stdio.h>
#include <unistd.h>

void main(){
    int aux = 10;
    while (aux != 0){
        printf("%d\n", aux);
        sleep(1);
        aux--;
    }
    printf("Boooooooooom!\n");
    sleep(1);
    printf("Fim!\n");
}