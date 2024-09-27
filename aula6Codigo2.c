#include<stdio.h>
#include<stdlib.h>

main(){
    int i, soma=0;

    for(i=10;i<100;i++){
        if(i%2==1){
            printf("%d\n", i);
            somaI+=i;
        }
        if(i%2==0){
            printf("%d\n", i);
            somaP+=i;
        }
    }
    printf("soma:%d\n", soma);

}