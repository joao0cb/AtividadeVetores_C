#include <stdio.h>

int main() {
    int QTD = 10;
    int vetor[QTD];
    int valor, i, j, mem;

    for(i = 0; i < QTD; ++i) {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &valor);
        mem = 0;

        while(mem < i && vetor[mem] < valor) {
            ++mem;
        }

        for(j = i; j > mem; --j) {
            vetor[j] = vetor[j - 1];
        }
        vetor[mem] = valor;
    }
    printf("\nVetor ordenado:\n");
    for(i = 0; i < QTD; ++i) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
    return 0;
}