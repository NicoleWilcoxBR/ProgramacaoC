/* Criar uma calculadora que faz operacoes de soma, subtracao, multiplicacao e divisao */
#include <stdio.h>

//Criar funcoes
int soma(int n1, int n2){
    return n1 + n2;
}

int subtracao(int n1, int n2){
    return n1 - n2;
}

int multiplicacao(int n1, int n2){
    return n1 * n2;
}

int divisao(int n1, int n2){
    return n1 / n2;
}

int main(){
    //Declarar variaveis
    int num1, num2;
    int resultadoSoma;
    int resultadoSubtracao;
    int resultadoMultiplicacao;
    int resultadoDivisao;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    resultadoSoma = soma(num1, num2);
    resultadoSubtracao = subtracao(num1, num2);
    resultadoMultiplicacao = multiplicacao(num1, num2);
    resultadoDivisao = divisao(num1, num2);

    printf("A soma é: %d \n", resultadoSoma);
    printf("A subtração é: %d \n", resultadoSubtracao);
    printf("A multiplicação é: %d \n", resultadoMultiplicacao);
    printf("A divisão é: %d \n", resultadoDivisao);

    return 0;
}