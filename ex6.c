#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float media;
} Aluno;

int main() {
    Aluno alunos[10], aprovados[10], reprovados[10];
    int a=0, r=0;

    for(int i=0;i<10;i++){
        printf("\nAluno %d\n", i+1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media: ");
        scanf("%f", &alunos[i].media);

        if(alunos[i].media >= 5)
            aprovados[a++] = alunos[i];
        else
            reprovados[r++] = alunos[i];
    }

    printf("\nAprovados:\n");
    for(int i=0;i<a;i++)
        printf("%s %d %.2f\n", aprovados[i].nome, aprovados[i].matricula, aprovados[i].media);

    printf("\nReprovados:\n");
    for(int i=0;i<r;i++)
        printf("%s %d %.2f\n", reprovados[i].nome, reprovados[i].matricula, reprovados[i].media);

    return 0;
}
