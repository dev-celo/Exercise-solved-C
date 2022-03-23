#include <stdio.h>
#include <stdlib.h>

//Função contar caractere da string
int tamanhoString(char string[]){
    int contar = 0;

    while(string[contar] != '\0'){
        ++contar;
    }

    return contar;
}
//main
int main(){
    //Escrever seu nome na tela 10 vezes. Um nome por linha.
    char nome[20] = "Marcelo";
    int tam;
    
    tam = tamanhoString(nome);
    
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < tam; ++j){
            printf("%c", nome[j]);
        }
        printf("\n");
    }
}

