#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int user;
    int pc = rand() % 5 + 1; //num aleat�rio entre 1 e 5

    printf("<<< EX05 - Ser� que voc� acerta? >>>\n");
    printf("\nVou pensar num numero entre 1 e 5. Tente adivinhar!");
    printf("\nQual seu palpite? ");
    scanf("%d", &user);
    printf("Eu pensei no n�mero %d e voc� pensou no %d.", pc, user);

}
