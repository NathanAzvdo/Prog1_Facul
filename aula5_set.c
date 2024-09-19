#include<stdio.h>
#include<stdlib.h>

main(){
    int i, numero;
    int soma=0;
    printf("Digite um número:");
    scanf("%d", &numero);
    for(i=1; i<=numero;i++){
        soma+=i;
        
    }
    printf("Soma:%d\n", soma);

}