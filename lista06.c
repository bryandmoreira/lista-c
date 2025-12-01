#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if(nota < 60){
        printf("REPROVADO! ");
    }else{
        printf("APROVADO! ");
    }


  system("pause");
    return 0;

}