#include <stdio.h>

int main() {
    int m[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            m[i][j] *= 5;
        }
    }

    printf("Matriz multiplicada por 5:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
