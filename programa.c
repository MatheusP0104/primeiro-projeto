#include <stdio.h>

int main(){
    /*
    %d => inteiro
    %f => decimal ou decimal preciso
    %c => caracter
    */
    int numero;
    int ano_nasc;
    int idade;
    int ano_atual = 2024;
    
    printf("Digite um numero: ");
    // Utilizo a função scanf para obter dados da entrada padrão.
    scanf("%d", &numero);
    // o & remete ao endereço da memória que a variavel está.

    printf("O numero digitado foi: %d", numero);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nasc);

    idade = ano_atual - ano_nasc;

    printf("Sua idade e: %d", idade);


}