#include <stdio.h>
#include <stdlib.h>

int main(){
    // Receber do teclado um nome e imprimir tantas vezes quantos
    // forem seus caracteres.

    int contarString (char string[]);

    char palavra[20];

    int tam;

    printf("Digite uma palavra a ser medida: ");
    scanf("%s", &palavra);

    tam = contarString(palavra);

    for(int j = 0; j < tam; ++j){
        printf("%d - ",j+1);
        for(int i = 0; i < tam; ++i){
        printf("%c",palavra[i]);
        }
        printf("\n");
    }
    printf(" \n ");

    system("pause");
    system("cls");
}
int contarString (char string[]){

    int contador = 0;

    while(string[contador] != '\0'){
        ++contador;
    }

    return contador;
}