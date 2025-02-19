/*Fazer um programa que cadastra alunos da escola estacio*/
#include <stdio.h>

int main(){
    char nome[20];
    int idade;
    int RA;

    printf("Digite o seu nome aluno: ");
    scanf("%s", nome);

    printf("Digite a sua idade aluno: ");
    scanf("%d", &idade);

    printf("Preencha o seu RA da matriculas: ");
    scanf("%d", &RA);

    printf("\nAtualizando cadastro.....\n");
    printf("Nome do aluno: %s \n", nome);
    printf("Idade do aluno: %d anos \n", idade);
    printf("RA do aluno: %d matricula \n", RA);

    printf("Cadastro atualizado com sucesso!!");

    return 0;
}