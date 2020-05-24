#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int user;
    int pc = rand() % 5 + 1; //num aleatório entre 1 e 5

    printf("<<< EX05 - Será que você acerta? >>>\n");
    printf("\nVou pensar num numero entre 1 e 5. Tente adivinhar!");
    printf("\nQual seu palpite? ");
    scanf("%d", &user);
    printf("Eu pensei no número %d e você pensou no %d.", pc, user);

}
