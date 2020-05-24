#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    int dobro;
    float parte;

    printf("<<< EX007 - DOBRO E TERÇA PARTE >>>\n");
    printf("\nDigite um número inteiro: ");
    scanf("%f", &num);

    dobro = 2*num;
    parte = num/3;

    printf("Analisando o %.0f, seu dobro é %d e sua terça parte é %.2f", num, dobro, parte);
}
