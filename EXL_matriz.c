#include <stdio.h>
#include <stdlib.h>


main(){
    int randomValuesData[8][8], i, j, randomValue, maxRow=0, maxCol=0, sumRow=0, sumCol=0;

    srand(time(NULL));

    printf("Matriz 8x8:\n");
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            randomValuesData[i][j]=rand()%11;
            printf("%2d ", randomValuesData[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            sumRow+=randomValuesData[i][j];
            sumCol+=randomValuesData[j][i];
        }
        if(sumRow>maxRow){maxRow=sumRow;}
        if(sumCol>maxCol){maxCol=sumCol;}
        sumRow=0;
        sumCol=0;
    }

    printf("\nO maior somatório foi:\n");
    printf("Linha: %d\n", maxRow);
    printf("Coluna:%d\n", maxCol);
}