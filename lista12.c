#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, num3, resposta;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    resposta = (num1 + num2 + num3) ;
    printf("A soma dos numeros foram: %.2f", resposta);

    system("pause");
    return 0;
}