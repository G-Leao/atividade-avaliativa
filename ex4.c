#include <stdio.h>

int main() {
    int m[3][3], identidade[3][3], resultado[3][3];

    printf("Digite a matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j)
                identidade[i][j] = 1;
            else
                identidade[i][j] = 0;
        }
    }


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            resultado[i][j] = 0; 

            for(int k = 0; k < 3; k++) {
                resultado[i][j] += m[i][k] * identidade[k][j];
            }
        }
    }

    printf("\nMatriz Identidade:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", identidade[i][j]);
        }
        printf("\n");
    }

    printf("\nResultado da multiplicacao:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
