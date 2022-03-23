#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Ler nome, sexo e idade. 
    Se sexo for feminino e idade menor que25. 
    Imprimir o nome da pessoa e a palavra ACEITA. 
    Caso contrario imprimir NAO ACEITA*/


    char nome[30];
    char sexo;
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);

    printf("Digite seu sexo: (f para feminino, m para masculino): ");
    scanf("%c", &sexo);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf(" \n ");

    if(sexo == 'f' || sexo == 'F' && idade < 25){
        printf("\n %s: Aceita", nome);
    }
    else{
        printf("\n %s: Não aceita", nome);
    }

}