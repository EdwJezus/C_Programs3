#include <stdio.h>

int main() {
    printf("====Lista de Atividades por Eduardo Jesus====\n");
    printf("\n");
  
    // Atividade 1
    int X[10];
    int i;

    for (i = 0; i < 10; i++) {
        X[i] = 30;
    }

    printf("Atividade 1:\n");
    printf("Vetor X: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", X[i]);
    }
    printf("\n\n");

    // Atividade 2
    int A[10];

    for (i = 0; i < 10; i++) {
        A[i] = (i + 1) * 10;
    }

    printf("Atividade 2:\n");
    printf("Vetor A: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    // Atividade 3
    int vetor[80];
    int menor_valor;
    int posicao_menor_valor;

    printf("Atividade 3:\n");
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 80; i++) {
        scanf("%d", &vetor[i]);
        if (i == 0 || vetor[i] < menor_valor) {
            menor_valor = vetor[i];
            posicao_menor_valor = i;
        }
    }

    printf("Menor valor: %d\n", menor_valor);
    printf("Posição do menor valor: %d\n\n", posicao_menor_valor);

    // Atividade 4
    int B[10];

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            B[i] = 20;
        } else {
            B[i] = 10;
        }
    }

    printf("Atividade 4:\n");
    printf("Vetor B: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }
    printf("\n\n");

    // Atividade 5
    int vetor_5[20];
    int num_pares = 0;

    printf("Atividade 5:\n");
    printf("Digite os elementos do vetor:\n");
    
     for (i = 0; i < 20; i++) {
        scanf("%d", &vetor_5[i]);
        if (vetor_5[i] % 2 == 0) {
            num_pares++;
        }
     }

     printf("Número de valores pares no vetor: %d\n", num_pares);

     return 0;
}
