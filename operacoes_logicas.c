#include <stdio.h>

int main(){
    /*
    > = Maior que
    < = Menor que
    == = Igual que
    >= = Maior ou Igual
    <= = Menor ou igual
    */

    int valor = 0;

    printf("Digite um numero maior que zero: ");
    scanf("%d", &valor);

    if(valor > 0){
        //Condição verdadeira
        printf("Voce acertou! \n");
        printf("O resultado da comparacao: %d", valor > 0);
    }else{
        //Condição falsa
        printf("Voce errou");
        printf("O resultado da comparacao: %d", valor > 0);
    }
}