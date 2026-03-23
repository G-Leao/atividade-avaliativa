#include <stdio.h>

int main() {
    int v[5];
    int *p = v;

    printf("Digite 5 numeros:\n");

    for(int i = 0; i < 5; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", (p + i));
    }

    printf("\nDobro dos valores:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i) * 2);
    }

    return 0;
}
