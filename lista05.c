#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

      int peso1, peso2, resultado;

      printf("Digite o peso da primeira pessoa: ");
      scanf("%d", &peso1);

      printf("Digite o peso da segunda pessoa: ");
      scanf("%d", &peso2);

      resultado = (peso1 + peso2) / 2;

      printf("A média dos pesos é: %.2d", resultado);

  system("pause");
    return 0;

}