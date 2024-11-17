#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int numbers1[3][3], numbers2[3][3], result[3][3], i, j;

    srand(time(NULL));

    for(i=0; i<3; i++){
        for(j=0; j<3;j++){
            numbers1[i][j]= rand()%40+10;
            numbers2[i][j]= rand()%40+10;
            result[i][j]=numbers1[i][j]+numbers2[i][j];
        }
    }

    printf("Matriz 1:\n");
    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            printf("%2d ", numbers1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            printf("%2d ", numbers2[i][j]);
        }
        printf("\n");
    }

    printf("\nResultado:\n");
    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            printf("%2d ", result[i][j]);
        }
        printf("\n");
    }

    
}