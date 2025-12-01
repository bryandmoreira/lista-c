#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

      float valor, desconto, precoFinal;

      printf("Digite o valor do produto: ");
      scanf("%f", &valor);

      desconto = valor / 10 ;
      precoFinal = valor - desconto;

      printf("Foi descontado %.2f reais", desconto);
      printf("\nO valor final é: %.2f", precoFinal);

  system("pause");
    return 0;

}