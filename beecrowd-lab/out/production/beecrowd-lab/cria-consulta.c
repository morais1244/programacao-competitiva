#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef struct{
    char nome[20], curso[4];
    int ra;
    float p1,p2,mt,freq;
} dados;

dados  aluno;

char confirma(){
    char resp;
    printf("Confirma (S/N)?");
    do
    {
        resp = toupper(getch());
    } while (resp != "S" || resp != "N");
    return resp;
}

void menu (char *opcao){
    system("cls");
    printf("\n      M E N U");
    printf("\n 1 - Cadastra alunos");
    printf("\n 2 - Mostra todos alunos");
    printf("\n 3 - Lista alunos aprovados");
    printf("\n 4 - Consulta por curso");
    printf("\n 5 -  Sair");
    printf("\n\n Opcao ----> ");
    do
    {
        scanf("%c",opcao);
    } while (opcao < 1 || opcao> 5);
}

void cadastro(char nomearq[]){
    char resp, numstr[10];
    FILE *arquivo;
    if((arquivo = fopen(nomearq, "r+b"))== NULL){
        if(())
    }
}