#include <stdio.h>
#include <stdlib.h>

int main(){

    float num, resposta;

    printf("Digite um número: ");
    scanf("%f", &num);


    resposta = (num) *3 ;
    printf("O triplo do numero seria: %.2f", resposta);

    system("pause");
    return 0;
}