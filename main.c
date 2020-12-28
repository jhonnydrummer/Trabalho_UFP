/* JOGO DE PERGUNTAS E RESPOSTAS
   ALUNO: DIONE AMARAL ARANTES
   Nº DO ALUNO: 40395
   CURSO: LICENCIATURA EM ENGENHARIA DA INFORMÁTICA
   DISCIPLINA: IAPG
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


char conhecimentos_gerais, politica, ciencia, desporto, historia;
char nome[50];
char menu_principal;

int main() {


    int i = 1;
    int quant;



    printf("-------------------------------------------------\n");
    printf("|             SEJA BEM VINDO AO QUIZ            |\n");
    printf("-------------------------------------------------\n\n");

    printf("QUANTAS PESSOAS IRAO PARTICIPAR? \n");
    scanf("%d", &quant);



    for (i = 0; i < quant; i++) {
        printf("Digite o nome:\n");
        scanf("%s", & nome);

    }

    printf("--------------------------------------------------\n");
    printf("                    VAMOS INICIAR                |\n");
    printf("--------------------------------------------------\n");
    printf("            >>ESCOLHA UMA CATEGORIA<<             \n");
    printf("--------------------------------------------------\n");
    printf("1-Conhecimentos Gerais\n2-Politica\n3-Ciencia\n4-Desporto\n5-Historia\n0-Sair\n\n");

    switch (menu_principal) {


        case 1:
            goto conhecimentos_gerais;
            break;

        case 2:
            goto politica;
            break;

        default :
            printf ("Valor invalido!\n");


    }
    getch();
    return 0;
    {
        conhecimentos_gerais:
        printf("CONHECIMENTOS GERAIS\n");
        printf("Digite ENTER para iniciar\n");
    }
    {
        politica:
        printf("POLITICA\n");
    }
}
















