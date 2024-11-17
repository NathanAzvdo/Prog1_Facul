#include<stdio.h>
#include<stdlib.h>

main(){
    
    float values[3], max=0;
    int options, i, j, temp;

        for(i=0; i<3; i++){
            printf("Digite o %dº valor:", i+1);
            scanf("%f", &values[i]);
        }

        printf("Digite uma opção:\n1- Imprime valores em ordem crescente.\n2-Imprime os valores em ordem decrescente.\n3- Retorna o maior valor.\n");
        scanf("%d", &options);

        if(options==1){
            
            for(i=0; i<2; i++){
                for(j=i+1; j<3; j++){
                    if(values[i]>values[j]){
                        temp = values[i];
                        values[i] = values[j];
                        values[j] = temp;
                    }
                }
            }
            printf("Valores ordem crescente:");
            for(i=0; i<3; i++){
                printf("%.2f ", values[i]);
            }
            printf("\n");
        }
        else if(options==2){

            for(i=0; i<2; i++){
                for(j=i+1; j<3; j++){
                    if(values[i]<values[j]){
                        temp = values[i];
                        values[i] = values[j];
                        values[j] = temp;
                    }
                }
            }

            printf("Valores ordem decrescente:");
            for(i=0; i<3; i++){
                printf("%.2f ", values[i]);
            }
            printf("\n");
        }
        else if(options==3){
            for(i=0; i<3; i++){
                if(values[i]>max){
                    max=values[i];
                }
            }
            printf("Maior: %.2f\n", max);
        }
        else{
            printf("Opção inválida");
        }

}