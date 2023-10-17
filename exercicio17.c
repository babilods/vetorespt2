#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("Vetor com valores que nao sao negativos:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}
