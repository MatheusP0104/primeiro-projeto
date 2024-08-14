#include <stdio.h>

int main(){
    float valor_produto;
    int valor_desconto;
    float valor_resultado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    printf("Digite o valor do desconto: ");
    scanf("%d", &valor_desconto);

    valor_resultado = valor_produto * (valor_desconto/100.0);

    printf("O valor do desconto eh: %.2f", valor_resultado);
    

}