#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Receber do teclado uma mensagem e imprimir quantas letras A, E,
    I, O, U tem esta mensagem. Considerar minúscula e maiúscula. A
    função em C que acessa letra por letra de uma palavra é
    strlem(variavel,x). (x é a posição da letra na frase)*/

    int contarString(char string[]);

    char frase[200];
    int tam;
    int ca, ce, ci, co, cu;

    ca = ce = ci = co = cu = 0;

    printf("Digite uma mensagem de até 200 caracteres: \n");
    fgets(frase, 200, stdin);

    tam = contarString(frase);

    for(int i = 0; i < tam; ++i){
        if(frase[i] == 'a' || frase[i] == 'A'){
            ++ca;
        }
        else if(frase[i] == 'e' || frase[i] == 'E'){
            ++ce;
        }
        else if(frase[i] == 'i' || frase[i] == 'I'){
            ++ci;
        }
        else if(frase[i] == 'o' || frase[i] == 'O'){
            ++co;
        }
        else if(frase[i] == 'u' || frase[i] == 'U'){
            ++cu;
        }
    }
    printf("\n\nA frase tem:\n");
    
    printf("\n%d letra a",ca);
    printf("\n%d letra e",ce);
    printf("\n%d letra i",ci);
    printf("\n%d letra o",co);
    printf("\n%d letra u",cu);
    
    printf("\n\n");
    
    system("pause");
    
    return 0;

}

int contarString(char string[]){
    int contar = 0;

    while(string[contar] != '\0'){
        ++contar;
    }

    return contar;
}