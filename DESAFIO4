#include <stdio.h>
#include <stdlib.h>

typedef struct Doc {
    int id;
    int paginas;
    int prioridade;
    struct Doc *prox;
} Doc;

typedef struct {
    Doc *inicio;
} Fila;

Fila* criarFila() {
    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->inicio = NULL;
    return f;
}


void inserir(Fila *f, int id, int paginas, int prioridade) {
    Doc *novo = (Doc*) malloc(sizeof(Doc));
    novo->id = id;
    novo->paginas = paginas;
    novo->prioridade = prioridade;
    novo->prox = NULL;


    if(f->inicio == NULL || prioridade < f->inicio->prioridade) {
        novo->prox = f->inicio;
        f->inicio = novo;
        return;
    }

    Doc *atual = f->inicio;

   
    while(atual->prox != NULL && atual->prox->prioridade <= prioridade) {
        atual = atual->prox;
    }

    novo->prox = atual->prox;
    atual->prox = novo;
}


Doc* remover(Fila *f) {
    if(f->inicio == NULL) return NULL;

    Doc *temp = f->inicio;
    f->inicio = temp->prox;

    return temp;
}

int main() {
    int n;
    printf("Quantos documentos? ");
    scanf("%d", &n);

    Fila *fila = criarFila();

    for(int i = 0; i < n; i++) {
        int id, paginas, prioridade;

        printf("\nDocumento %d\n", i+1);

        printf("ID: ");
        scanf("%d", &id);

        printf("Paginas: ");
        scanf("%d", &paginas);

        printf("Prioridade (menor = mais importante): ");
        scanf("%d", &prioridade);

        inserir(fila, id, paginas, prioridade);
    }

    printf("\n--- Impressao ---\n");

    Doc *d;
    while((d = remover(fila)) != NULL) {
        printf("Doc %d | Paginas: %d | Prioridade: %d\n",
               d->id, d->paginas, d->prioridade);
        free(d);
    }

    free(fila);
    return 0;
}
