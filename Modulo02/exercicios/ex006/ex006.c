#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    int ant;
    int suc;

    printf("<<< EX006 - ANTECESSOR E SUCESSOR >>>\n");
    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("Voc� digitou o n�mero %d e seu antecessor � %d e seu sucessor � %d", num, ant, suc);


}
