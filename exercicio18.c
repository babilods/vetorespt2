#include <stdio.h>

int main() {
    int vetor[10];
    int x, count = 0;

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número inteiro x: ");
    scanf("%d", &x);

    printf("Multiplos de %d no vetor:\n", x);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            count++;
        }
    }
    printf("\nTotal de multiplos de %d no vetor: %d\n", x, count);
}
