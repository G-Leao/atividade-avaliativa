#include <stdio.h>
#include <stdlib.h>

typedef struct Cliente {
    int id;
    int tempo;
    struct Cliente *prox;
} Cliente;

typedef struct {
    Cliente *inicio;
    Cliente *fim;
} Fila;

// testani validaçao
int lerInt() {
    int x;
    while(scanf("%d", &x) != 1) {
        printf("Entrada invalida! Digite um numero: ");
        while(getchar() != '\n'); // limpa buffer
    }
    return x;
}

Fila* criarFila() {
    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}


void enfileirar(Fila *f, int id, int tempo) {
    Cliente *novo = (Cliente*) malloc(sizeof(Cliente));
    novo->id = id;
    novo->tempo = tempo;
    novo->prox = NULL;

    if(f->fim == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}


Cliente* desenfileirar(Fila *f) {
    if(f->inicio == NULL) return NULL;

    Cliente *temp = f->inicio;
    f->inicio = temp->prox;

    if(f->inicio == NULL)
        f->fim = NULL;

    return temp;
}

int main() {
    int n;

    printf("Quantos clientes? ");
    n = lerInt();

    Fila *fila = criarFila();

    for(int i = 0; i < n; i++) {
        int id, tempo;

        printf("\nCliente %d\n", i+1);

        printf("ID: ");
        id = lerInt();

        printf("Tempo de atendimento (minutos): ");
        tempo = lerInt();

        enfileirar(fila, id, tempo);
    }

    printf("\n--- Atendimento ---\n");

    int tempoEspera = 0;
    Cliente *c;

    while((c = desenfileirar(fila)) != NULL) {
        printf("Cliente %d | Tempo de espera: %d minutos\n",
               c->id, tempoEspera);

        tempoEspera += c->tempo;

        free(c);
    }

    free(fila);
    return 0;
}
