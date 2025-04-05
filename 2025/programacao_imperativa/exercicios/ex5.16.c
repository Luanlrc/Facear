#include <stdio.h>

int main() {
    int n, i;
    double h = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        h += 1.0 / i;
    }

    printf("H(%d) = %.4f\n", n, h);
    return 0;
}
