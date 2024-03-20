#include <stdio.h>
#include <stdbool.h>

bool primo (int n) {
    int cont = 0;
    for (int i = 2; i < 10 ; i++) {
        if (n % i == 0) {
            if (i!= n) {
                cont++;
            }
        }
        
    }
    if (cont == 0) {
        return true;
    }
        
    return false;
}

int main()
{
    int n1;
    int n2;
    printf("digite o primeiro número \n ");
    scanf("%d", &n1);
    printf("digite o segundo número \n ");
    scanf("%d", &n2);
    
    printf("Números primos no intervalo de %d a %d:\n", n1, n2);
    for (int i = n1; i <= n2; i++) {
        if (primo(i)) {
            printf("%d\n", i);
        
        }
    }

    return 0;
}
