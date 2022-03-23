#include <stdio.h>
#include <stdlib.h>

int main(){
    // Digite um nome , calcule e mostre quantas letras tem.

    int contarString (char string[]);

    char palavra[20];
    int tam;

    printf("Digite uma palavra a ser medida: ");
    scanf("%s", &palavra);

    tam = contarString(palavra);

    printf("\nTamanho da palavra: %i\n", tam);

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