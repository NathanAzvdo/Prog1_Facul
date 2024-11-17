#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){

    char words[5][100], word[10];
    char concat[500]="";
    int i, vidaIsPresent=0;

    for(i=0;i<5;i++){
        printf("digite a %dº palavra:", i+1);
        scanf("%99s", word);
        
        for(int j = 0; word[j]; j++) {
            word[j] = tolower(word[j]);
        }
        strcpy(words[i], word);

        if(strcmp(words[i], "vida")==0){
            vidaIsPresent=1;
        }
    }

    if(vidaIsPresent){
        for(i=0;i<5;i++){
            strcat(concat, words[i]);
        }
        printf("\nString concatenado: %s", concat);
        printf("\nQuantidade de caracteres:%lu\n", strlen(concat));
    }
    else{
        printf("\npalavra vida não foi encontrada\n");
    }

}