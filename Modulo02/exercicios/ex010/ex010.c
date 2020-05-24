#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char prod[15];
    float preco;
    float desc;
    float total;

    printf("<<< EX010 - PREÇO DO PRODUTO >>>\n");

    printf("Produto: ");
    gets(prod);

    printf("Preço de %s: ", prod);
    scanf("%f", &preco);

    printf("Desconto (%%): ");
    scanf("%f", &desc);

    total = preco * (1-(desc/100));

    printf("O produto %s custava R$%.2f, mas com o desconto de %.2f%%, passa a custar R$%.2f", prod, preco, desc, total);


}
