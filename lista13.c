#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, respMedia;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    respMedia = (n1 + n2 + n3) /3;
    printf("A media das notas são: %.2f", respMedia);

    system("pause");
    return 0;
}