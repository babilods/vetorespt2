#include <stdio.h>

int main() {
    int vetorA[10];
    int vetorB[10];
    int vetorC[20];  

    printf("Digite 10 numeros inteiros para o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nDigite 10 numeros inteiros para o vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorC[2 * i] = vetorA[i];     
        vetorC[2 * i + 1] = vetorB[i]; 
    }

    // Impressão do vetor C
    printf("\nVetor C (pares de A e impares de B):\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetorC[i]);
    }
}
