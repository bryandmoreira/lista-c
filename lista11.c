#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

      int idadeMulher, idadeHomem;

      printf("Digite a idade do homem: ");
      scanf("%d", &idadeHomem);

      

      if(idadeHomem > 50){
        printf("RECEBE DESCONTO! ");
      }else if(idadeHomem < 50){
        printf("NÃO RECEBE DESCONTO! ");
      }

      printf("\nDigite a idade da mulher: \n");
      scanf("%d", &idadeMulher);

      if(idadeMulher > 40){
        printf("RECEBE DESCONTO! ");
      }else{
        printf("NÃO RECEBE DESCONTO! ");
      }

  system("pause");
    return 0;

}