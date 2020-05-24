#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    int idade;
    float massa;

    //cabeçalho
    printf("<<< EX003 - DADOS >>>\n");

    //nome
    printf("Qual o seu nome? ");
    gets(nome);

    //idade
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    //massa
    printf("Qual o seu peso? [kg] ");
    scanf("%f", &massa);

    //processando
    printf("\n---<<< PROCESSANDO >>>---");
    printf("\nMuito prazer, %s. Você tem %d anos e pesa %.2fkg certo?", nome, idade, massa);




}
