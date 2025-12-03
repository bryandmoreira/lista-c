#include <stdio.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 5 == 0) {
        printf("O numero %d é multiplo de 5.\n", numero);
    } else {
        printf("O numero %d nao é multiplo de 5.\n", numero);
    }

    return 0;
}