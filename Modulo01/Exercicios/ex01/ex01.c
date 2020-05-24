#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Listagem de alunos");
    printf("\nNome\t\tNota\n");
    printf("--------------------\n");
    printf("Ana Luiza\t8.5\n");
    printf("Bianca Martins \t9.0\n");
    printf("Claudia Sá\t5.5\n");
    printf("Giovana Silva \t7.5\n");
    printf("--------------------");

}
