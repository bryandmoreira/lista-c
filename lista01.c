#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

    int num, convert;
 
    printf("Digite um valor");
    scanf("%d", &num);

    convert = (num * 100);

    printf("O valor em metros convertido em centimetros é: %.2d", convert);

    

  system("pause");
    return 0;

}