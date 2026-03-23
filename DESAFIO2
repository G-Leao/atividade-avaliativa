#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    char valor;
    struct No *prox;
} No;


void push(No **topo, char c) {
    No *novo = (No*) malloc(sizeof(No));
    novo->valor = c;
    novo->prox = *topo;
    *topo = novo;
}


char pop(No **topo) {
    if (*topo == NULL) return '\0';

    No *temp = *topo;
    char valor = temp->valor;

    *topo = temp->prox;
    free(temp);

    return valor;
}

int main() {
    char str[100];
    No *pilha = NULL;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    
    for(int i = 0; str[i] != '\0'; i++) {
        push(&pilha, str[i]);
    }

    printf("String invertida: ");

    
    while(pilha != NULL) {
        printf("%c", pop(&pilha));
    }

    return 0;
}
