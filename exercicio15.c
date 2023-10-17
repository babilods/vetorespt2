#include <stdio.h>

int main() {
    int vetor[20];
    int a, b, c;

    printf("Digite 20 valores inteiros:\n");
    for (a = 0; a < 20; a++) {
        printf("Digite o valor para a posicao %d: ", a);
        scanf("%d", &vetor[a]);
    }

    for (a = 0; a < 20; a++) {
        for (b = a + 1; b < 20;) {
            if (vetor[a] == vetor[b]) {
            
                for (c = b; c < 19; c++) {
                    vetor[c] = vetor[c + 1];
                }
            } else {
                b++;
            }
        }
    }
    printf("Vetor sem elementos repetidos:\n");
    for (a = 0; a < 20; a++) {
        printf("%d ", vetor[a]);
    }

}
