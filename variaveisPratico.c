#include <stdio.h>

int main(){
    char nome[20];
    float altura;
    char opcao;
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Você é M de homem ou F de Mulher?");
    scanf(" %c", &opcao);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Nome: %s \n", nome);
    printf("Altura: %.2F \n", altura);
    printf("Você eh: %c \n", opcao);
    printf("Voce tem %d anos \n", idade);

    return 0;
}