#include <stdio.h>
#include <stdlib.h>

main(){
    int idade, somaIdades = 0, numPessoas = 0;
    int maiorIdade = 0, menorIdade = 0;

    printf("Digite a idade das pessoas (0 para terminar):\n");

    do {
        scanf("%d", &idade);

        if (idade > 0) {
            somaIdades += idade;
            numPessoas++;

        
            if (numPessoas == 1) {
                menorIdade = idade;
                maiorIdade = idade;
            }

            if (idade > maiorIdade) {
                maiorIdade = idade;
            }
            if (idade < menorIdade) {
                menorIdade = idade;
            }
        }

    } while (idade != 0);

    if (numPessoas > 0) {
        float mediaIdade = (float)somaIdades / numPessoas;

        printf("\nNúmero de pessoas: %d\n", numPessoas);
        printf("Idade média do grupo: %.2f\n", mediaIdade);
        printf("Menor idade: %d\n", menorIdade);
        printf("Maior idade: %d\n", maiorIdade);
    } else {
        printf("Nenhuma idade válida foi inserida.\n");
    }

}