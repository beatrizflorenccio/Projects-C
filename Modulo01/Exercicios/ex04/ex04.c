#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome1[30], nome2[30], nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    //cabeçalho
    printf("<<< EX04 - LISTAGEM >>>\n");

    //cadastro1
    printf("\nCadastrando a primeira pessoa:");
    printf("\n------------------------------");
    printf("\nNOME: ");
    gets(nome1);
    printf("SEXO [F/M]: ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);
    fflush(stdin);

    //cadastro2
    printf("\nCadastrando a segunda pessoa:");
    printf("\n------------------------------");
    printf("\nNOME: ");
    gets(nome2);
    printf("SEXO [F/M]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);
    fflush(stdin);

    //cadastro3
    printf("\nCadastrando a terceira pessoa:");
    printf("\n------------------------------");
    printf("\nNOME: ");
    gets(nome3);
    printf("SEXO [F/M]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    //exibindo
    printf("\nListagem completa:");
    printf("\n----------------------------------");
    printf("\nNOME\t\tSEXO\tNOTA");
    printf("\n%-18s%-6c%4.1f", nome1, sexo1, nota1);
    printf("\n%-18s%-6c%4.1f", nome2, sexo2, nota2);
    printf("\n%-18s%-6c%4.1f", nome3, sexo3, nota3);







}
