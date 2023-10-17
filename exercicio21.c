#include <stdio.h>

int main() {
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    printf("Escreva 10 numeros inteiros para o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nEscreva 10 numeros inteiros para o vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    printf("\nVetor C (A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
}
