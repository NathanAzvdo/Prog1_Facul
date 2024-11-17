#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int numbers[18], i = 0, firstValue = 0, secondValue = 0, cont = 0;
    char results[17][20];

    srand(time(NULL));

    printf("Vetor aleatório:\n");
    for (i = 0; i < 18; i++) {
        numbers[i] = rand() % 9 + 1;
        printf("%d", numbers[i]);
        if (i < 17) {
            printf(", ");
        } else {
            printf("\n");
        }
    }

    for (i = 0; i < 17; i++) {
        if (numbers[i] % 2 != 0 && numbers[i + 1] % 2 != 0) {
            firstValue = numbers[i];
            secondValue = numbers[i + 1];
            double result = pow(firstValue, secondValue);
            sprintf(results[cont], "[%d,%d] -> %.0f", firstValue, secondValue, result);
            cont++;
        }
    }

    printf("\nVetor de strings (matriz de caracteres):\n");
    for (i = 0; i < cont; i++) {
        printf("%s\n", results[i]);
    }

    return 0;
}