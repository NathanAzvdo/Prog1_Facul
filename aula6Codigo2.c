#include<stdio.h>
#include<stdlib.h>

main(){
    int i, soma=0;

    for(i=10;i<100;i++){
        if(i%2==1){
            printf("%d\n", i);
            soma+=i;
        }
    }
    printf("soma:%d\n", soma);

}