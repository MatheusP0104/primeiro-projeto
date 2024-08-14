#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("O resultado de %d == %d eh: %d\n", num1, num2, num1 == num2);
    printf("O resultado de %d > %d eh: %d\n", num1, num2, num1 > num2);
    printf("O resultado de %d < %d eh: %d\n", num1, num2, num1 < num2);
    printf("O resultado de %d >= %d eh: %d\n", num1, num2, num1 >= num2);
    printf("O resultado de %d <= %d eh: %d\n", num1, num2, num1 <= num2);
    printf("O resultado de %d != %d eh: %d", num1, num2, num1 != num2);
}