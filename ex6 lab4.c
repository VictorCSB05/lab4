#include <stdio.h>
#include <math.h>

float calculo(int n) {
    float soma = 0;
    for (int i = 1; i <= n; i++) {
        float termo = i / pow(i, 2);
        if (i % 2 == 0) {
            soma -= termo;
        } else {
            soma += termo;
        }
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o número: ");
    scanf("%d", &n);
    float s = calculo(n);
    printf("O resultado para %d é: %f\n", n, s);

    return 0;
}
