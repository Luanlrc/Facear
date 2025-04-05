#include <stdio.h>

int main() {
    int cont = 0;
    int num = 1;

    printf("Cinco primeiros multiplos de 3 maiores que 0:\n");

    while (cont < 5) {
        if (num % 3 == 0) {
            printf("%d\n", num);
            cont++;
        }
        num++;
    }

    return 0;
}
