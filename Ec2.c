#include<stdio.h>
#include<stdlib.h>

main(){
    int number1, number2, temp, dif, i;

    printf("Digite um número: ");
    scanf("%d", &number1);
    
    printf("Digite outro número: ");
    scanf("%d", &number2);

    if(number2>number1){
        temp=number1;
        number1 = number2;
        number2 = temp;
    }

    dif = number1-number2;
    printf("maior número: %d\n", number1);
    printf("Diferença: %d\n", dif);

    if(number1!=number2){
        if(number1%2==0){
            number1-=1;
        }
        for(i=number1; i>=number2; i-=2){
            printf("%d ", i);
        }
        printf("\n");
    }
    else{
        printf("Os números são iguais.\n");
    }
}