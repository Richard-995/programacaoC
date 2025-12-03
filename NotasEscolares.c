#include <stdio.h>

int main (){

    float nota1, nota2,nota3, media;

printf("digite a nota 1:");
scanf("%f", &nota1);

printf("digite a nota 2:");
scanf("%f", &nota2);

printf("digite a nota 3:");
scanf("%f", &nota3);

media= (nota1+nota2+nota3)/3;
// nas respostas marcar as casas com pontos.
if (media>=5)
{
    printf("voce foi aprovado!com a media: %.1f", media);
}
else{
    printf("voce foi reprovado! com a media: %.1f \n", media);
    printf("continue tentando!!");
}

}
