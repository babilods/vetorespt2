#include <stdio.h>

int main() {
    int vetor[10];
    int a, b;

    printf("Digite 10 valores inteiros:\n");
    for (a = 0; a < 10; a++) {
        printf("Digite o valor para a posicao %d: ", a);
        scanf("%d", &vetor[a]);
    }

    printf("Valores iguais:\n");
    for (a = 0; a < 10; a++) {
        for (b = a + 1; b < 10; b++) {
            if (vetor[a] == vetor[b]) {
                printf("%d\n", vetor[a]);
            }
        }
    }
}
