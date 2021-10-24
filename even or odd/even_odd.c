#include <stdio.h>
#include <stdlib.h>

/*
    Desenvolva um algoritmo que peça a entrada de 1 número inteiro, o programa deve retornar
    se o numero é par ou impar.
    Develop an algorithm that ask the entrance of 1 int number, the program must return if the
    number is even or odd.
*/

/*
    @author: Marcelo H P Silva
    date : 22-10-2021
*/

int main(){
    //declaração de variáveis || declaration of variables.
    int numero;

    printf("Insira o valor a ser comparado(par ou impar): ");
    scanf("%d", &numero);

    if(numero % 2 == 0) //if the rest of division = 0, number even
        printf("%d: par\n", numero);
    else //if the rest of division != 0, number odd
        printf("%d: Impar\n", numero);

    return 0;
}