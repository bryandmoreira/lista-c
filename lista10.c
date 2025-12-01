#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

   int idade1, idade2;

   printf("Digite a idade da primeira pessoa: ");
   scanf("%d", &idade1);

   printf("Digite a idade da segunda pessoa: ");
   scanf("%d", &idade2);

   if(idade1 > idade2){
    printf("A primeira pessoa é mais velha que a segunda.");
   }else if(idade1 < idade2){
    printf("A segunda pessoa é mais velha que a primeira.");
   }else{
    printf("Ambos tem a mesma idade. \n");
   }
  
  system("pause"); 
    return 0;

}