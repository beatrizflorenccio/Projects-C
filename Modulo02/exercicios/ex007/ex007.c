#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    int dobro;
    float parte;

    printf("<<< EX007 - DOBRO E TER�A PARTE >>>\n");
    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &num);

    dobro = 2*num;
    parte = (float)num/3;

    printf("Analisando o %d, seu dobro � %d e sua ter�a parte � %.2f", num, dobro, parte);
}
