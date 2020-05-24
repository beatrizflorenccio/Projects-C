#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int letra;
    int ant;
    int suc;

    printf("<<< EX008 - ALFABETO >>>\n");
    printf("\nDigite uma letra: ");
    letra = getchar();

    ant = letra - 1;
    suc = letra + 1;

    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.", letra, ant, suc);

}
