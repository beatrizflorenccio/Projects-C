#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    int dobro;
    float parte;

    printf("<<< EX007 - DOBRO E TER�A PARTE >>>\n");
    printf("\nDigite um n�mero inteiro: ");
    scanf("%f", &num);

    dobro = 2*num;
    parte = num/3;

    printf("Analisando o %.0f, seu dobro � %d e sua ter�a parte � %.2f", num, dobro, parte);
}
