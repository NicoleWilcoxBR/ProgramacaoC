/* Biblioteca padrao de entrada e saida */
#include <stdio.h>

/* Funcao principal do programa*/
int main(){
    int idade = 34; //Variavel do tipo inteiro
    int quantidade = 1; //Variavel do tipo inteiro
    float altura = 1.75; //Variavel de ponto flutuante decima
    char letra = 'A'; //Variavel de caracteres
    char nome[30] = "Eric"; //Variavel de texto recebe nomes
    double peso = 84.2;

    printf("O %s tem uma idade de %d anos\n", nome, idade);
    printf("A Altura eh de %.2F metros \n", altura);
    printf("A opcao sua eh: %c \n", letra);

    /*
    %d: Imprime um inteiro em formato decimal
    %i: Equivale a um inteiro %d
    %f: Ponto flutuante decimal
    %e: Notacao cientifica
    %c: Imprime um caractere
    %s: Imprime um conjunto de cacteres que pode ser um nome
    */

    return 0; //Fim do programa
}