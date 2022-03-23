#include <stdio.h>
#include <stdlib.h>

int main(){
    //Receber um nome e imprimir as 4 primeiras letras do nome.

    char nome[20];

    printf("Digite seu primeiro nome(sem espacos): \n");
    scanf("%s", &nome);

    printf("\n");

    printf("As 4 primeiras letras do seu nome: ");
    
    for(int i = 0; i < 4; ++i){
        printf("%c", nome[i]);
    }
}