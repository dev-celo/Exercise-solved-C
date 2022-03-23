#include <stdio.h>
#include <stdlib.h>


//main
int main(){
    //Ler nome, endereço, telefone e imprimir

    char nome[20];
    char telefone[30];
    char endereco[50];

    //recolhendo dados
    printf("Digite seu primeiro nome: ");
    fgets(nome, 20, stdin);

    printf("Digite seu numero de telefone com DDD: ");
    fgets(telefone, 30, stdin);

    printf("Digite seu endereco: ");
    fgets(endereco, 50, stdin);

    system("pause");
    //fim da colheita dos dados

    //dados de saída
    printf("\nNome: %s\n\n", nome);
    printf("\nFone: %s\n\n", telefone);
    printf("\nEndereço: %s\n\n", endereco);
}