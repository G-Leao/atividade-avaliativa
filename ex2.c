#include <stdio.h>

int main() {
    int v[5];


    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }
    printf("Vetor invertido:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    return 0;
}
