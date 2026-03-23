#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[30];
    char autor[15];
    int ano;
} Livro;

int main() {
    Livro livros[5];
    char busca[30];

    for(int i=0;i<5;i++){
        printf("\nLivro %d\n", i+1);

        printf("Titulo: ");
        scanf("%s", livros[i].titulo);

        printf("Autor: ");
        scanf("%s", livros[i].autor);

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }

    printf("\nDigite o titulo para buscar: ");
    scanf("%s", busca);

    printf("\nResultados:\n");
    for(int i=0;i<5;i++){
        if(strcmp(livros[i].titulo, busca) == 0){
            printf("%s %s %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
        }
    }

    return 0;
}
