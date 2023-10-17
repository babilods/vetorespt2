#include <stdio.h>

int main() {
    float vetor[5];
    int codigo, i;

    printf("Digite 5 numeros reais para o vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%f", &vetor[i]);
    }

    printf("Digite um codigo (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("ordem direta:\n");
            for (i = 0; i < 5; i++) {
                printf("%f ", vetor[i]);
            }
            break;
        case 2:
            printf("ordem inversa:\n");
            for (i = 4; i >= 0; i--) {
                printf("%f ", vetor[i]);
            }
            break;
        default:
            printf("Codigo invalido. Programa finalizado.\n");
    }
}
