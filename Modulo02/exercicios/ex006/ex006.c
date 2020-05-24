#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    int ant;
    int suc;

    printf("<<< EX006 - ANTECESSOR E SUCESSOR >>>\n");
    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("Você digitou o número %d e seu antecessor é %d e seu sucessor é %d", num, ant, suc);


}
