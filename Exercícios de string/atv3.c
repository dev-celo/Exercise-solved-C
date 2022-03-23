#include <stdio.h>
#include <stdlib.h>

int main(){
    //Receber um nome e imprimir as letras na posição par.

    int tamanhoString(char string[]);

    char nome[20];
    int tam;

    printf("Digite seu primeiro nome(sem espacos): \n");
    scanf("%s", &nome);

    tam = tamanhoString(nome);

    printf("Letras nas prosicoes impares: ");
    for (int i = 0; i < tam; ++i){
        
        if(i % 2 == 0){
            printf("Posição %i = %c \n",i,  nome[i]);
        }
    }

}
    //Função contar caractere da string
    int tamanhoString(char string[]){

        int contar = 0;

        while(string[contar] != '\0'){
            ++contar;
        }

        return contar;
}