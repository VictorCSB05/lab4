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
    
    printf("digite o número ");
    scanf("%d", &n1);
    int s = primo(n1);
    if (s == true) {
        printf("o número é primo");
    }
    else {
        printf("o número não é primo ");  
    }

    return 0;
}
