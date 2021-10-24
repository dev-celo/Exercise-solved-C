#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Desenvolva um algoritmo que imprima uma pirâmide em C
    Develop an algorithm that prints a pyramid in Lenguage C

    the pyramid have the following struct:
    
    1 2 3 4 5 6 7 8 9
      2 3 4 5 6 7 8 
        3 4 5 6 7
          4 5 6
            5
*/

/*
    @author: Marcelo H P Silva
    date : 24-10-2021
*/

int main(){
    setlocale(LC_ALL, "portuguese");

    int linha, coluna;
    int controller = 10;

    printf("\n");

    //
    for(linha = 0; linha < (controller/2); linha++){ //linha
        for(coluna = linha + 1; coluna < (controller - linha); coluna++){  //coluna
            printf("%d ", coluna);
        }
    printf("\n");

        for(coluna = 0; coluna <= linha; coluna++){
            printf("  ");
        }
    }
    return 0;
}