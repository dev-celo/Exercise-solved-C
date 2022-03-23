#include <stdio.h>
#include <stdlib.h>

int main(){
    //Receber um nome no teclado e imprimir quantas letras "A" tem o nome.

    int contarString(char string[]);

    char nome[50];
    int tam;
    int ca;

    ca = 0;

    printf("Digite um nome: \n");
    fgets(nome, 50, stdin);

    tam = contarString(nome);

    for(int i = 0; i < tam; ++i){
        if(nome[i] == 'a' || nome[i] == 'A'){
            ++ca;
        }
    }
    printf("\n\nO nome tem:\n");
    printf("\n%i letra a",ca);
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
