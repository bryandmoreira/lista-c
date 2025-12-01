#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  float celsius, resultado;

  printf("Digite quantos graus Celsius você quer converter em Fahrenheit: ");
  scanf("%f", &celsius);

  resultado = (celsius * 9 /5) + 32;
  printf("O valor de graus Celsius em Fahrenheit é: %.1f °F", resultado);

  system("pause");
    return 0;

}
