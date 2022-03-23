#include <stdio.h>
#include <stdlib.h>

int main(){
    //Receber um nome do teclado e imprimi-lo de trás pra frente.

    int tamanhoString(char string[]);

    char nome[20];
    int tam;

    printf("Digite uma palavra e inverteremos: ");
    scanf("%s", nome);

    printf("\n\n");

    tam = tamanhoString(nome);

    printf("Nome invertido: ");
    for(int i = tam-1; i >= 0; --i){
        printf("%c", nome[i]);
    }
}
int tamanhoString(char string[]){

    int contar = 0;

    while(string[contar] != '\0'){
        ++contar;
    }
    return contar;
}