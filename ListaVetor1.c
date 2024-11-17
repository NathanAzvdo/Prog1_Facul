#include <stdlib.h>
#include <stdio.h>

main(){

    int i, id;
    float preco;
    char frutos[5][20] = {
        "Camarão",
        "Lula",
        "Siri",
        "Polvo",
        "Vieira"
    };
    float precos[5]= {
        100.5,
        75.3,
        120,
        90.25,
        140.70,
    };

    for(i=0; i<5; i++){
        printf("%d-%s: %.2f\n",i+1, frutos[i], precos[i]);
    }
    



}