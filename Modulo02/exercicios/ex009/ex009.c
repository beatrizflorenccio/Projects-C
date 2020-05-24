#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    float n1;
    float n2;
    float m;

    printf("<<< EX009 - MÉDIA DO ALUNO >>>\n");
    printf("\nNome do aluno: ");
    gets(nome);

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    m = (n1+n2)/2;

    printf("O aluno %s tirou notas %.2f e %.2f e ficou com média %.2f", nome, n1, n2, m);




}
