#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

      int base, altura, resultado;

      printf("Digite o valor da altura: ");
      scanf("%d", &altura);

      printf("Digite o valor da base: ");
      scanf("%d", &base);

      resultado = (base * altura);

    printf("A medida do retângulo é: %.2f", resultado);

  system("pause");
    return 0;

}