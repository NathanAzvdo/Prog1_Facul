#include<stdio.h>
#include<stdlib.h>

main(){
    int voto;
    int totalJose = 0, totalJoao = 0, totalMaria = 0, totalFatima = 0;
    int totalNulo = 0, totalBranco = 0;
    int totalVotos = 0;

    do {
        printf("Digite o código do voto (1-Jose, 2-Joao, 3-Maria, 4-Fatima, 5-Nulo, 6-Branco, 0-Sair): ");
        scanf("%d", &voto);

        switch(voto) {
            case 1:
                totalJose++;
                totalVotos++;
                break;
            case 2:
                totalJoao++;
                totalVotos++;
                break;
            case 3:
                totalMaria++;
                totalVotos++;
                break;
            case 4:
                totalFatima++;
                totalVotos++;
                break;
            case 5:
                totalNulo++;
                totalVotos++;
                break;
            case 6:
                totalBranco++;
                totalVotos++;
                break;
            case 0:
        
                break;
            default:
                printf("Código inválido! Tente novamente.\n");
                break;
        }
    } while(voto != 0);

    float percNulo = 0, percBranco = 0;
    if(totalVotos > 0) {
        percNulo = ((float)totalNulo / totalVotos) * 100;
        percBranco = ((float)totalBranco / totalVotos) * 100;
    }

    printf("\nResultados da eleição:\n");
    printf("Total de votos para Jose: %d\n", totalJose);
    printf("Total de votos para Joao: %d\n", totalJoao);
    printf("Total de votos para Maria: %d\n", totalMaria);
    printf("Total de votos para Fatima: %d\n", totalFatima);
    printf("Total de votos nulos: %d\n", totalNulo);
    printf("Total de votos em branco: %d\n", totalBranco);
    printf("Percentual de votos nulos: %.2f%%\n", percNulo);
    printf("Percentual de votos em branco: %.2f%%\n", percBranco);

    return 0;
}