#include <stdio.h>

int main() {
    int v[3], m[3][3], r[3];

    printf("Digite o vetor (3 valores):\n");
    for(int i=0;i<3;i++){
        printf("v[%d]: ", i);
        scanf("%d",&v[i]);
    }

    printf("Digite a matriz 3x3:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d",&m[i][j]);
        }
    }

    for(int j=0;j<3;j++){
        r[j] = 0;
        for(int i=0;i<3;i++){
            r[j] += v[i] * m[i][j];
        }
    }

    printf("Resultado:\n");
    for(int i=0;i<3;i++){
        printf("%d ", r[i]);
    }

    return 0;
}
