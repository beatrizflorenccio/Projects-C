#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    int dobro;
    float parte;

    printf("<<< EX007 - DOBRO E TERÇA PARTE >>>\n");
    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    dobro = 2*num;
    parte = (float)num/3;

    printf("Analisando o %d, seu dobro é %d e sua terça parte é %.2f", num, dobro, parte);
}
