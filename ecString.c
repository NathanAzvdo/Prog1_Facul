#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

main(){
    int i, cont=0;
    char letra, text[] = "De almas sinceras a uniao sincera Nada ha que impeça "
        "amor nao e amor Se quando encontra obstaculos se "
        "altera, Ou se vacila ao minimo temor. "
        "Amor e um marco eterno, dominante, Que encara a "
        "tempestade com bravura; e astro que norteia a vela "
        "errante, Cujo valor se ignora, la na altura. "
        "Amor nao teme o tempo, muito embora Seu alfange nao "
        "poupe a mocidade; Amor nao se transforma de hora em "
        "hora, Antes se afirma para a eternidade. "
        "Se isso e falso, e que e falso alguem provou, Eu nao sou "
        "poeta, e ninguem nunca amou.";

    printf("Digite uma letra para contar: ");
    scanf(" %c", &letra);

    for(i=0; text[i]!='\0'; i++){
        if(tolower(text[i])==letra){
            cont++;
        }
    }
    printf("A letra %c aparece %d vezes.\n", letra, cont);

}
