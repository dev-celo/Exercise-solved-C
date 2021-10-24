#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa em C, que dado um valor para saque, retorne o menor numero de cédula
    
    Make a programin C, which given a withdrawal value, returns the smallest number of bills
*/

/*
    @author: Marcelo H P Silva
    date : 23-10-2021
*/

int main(){
    //declaration of variables
    int valor_saque;

    printf("Digite o valor a ser sacado\n(notas disp: 100, 50, 25, 10, 5, 1): \n");
    scanf("%d", &valor_saque);

    printf("    *Valor do saque: %d\n", valor_saque);

    printf("Notas: \n");

    printf("    *100: %d\n", valor_saque/100); //on interger division, return the number of bills of 100
    valor_saque = valor_saque % 100; //using module of division. soon, the variable valor_saque have value of rest of division 

    //repeat the previous step for all available banknote values
    printf("    *50: %d\n", valor_saque/50);
    valor_saque = valor_saque % 50;

    printf("    *25: %d\n", valor_saque/25);
    valor_saque = valor_saque % 25;

    printf("    *10: %d\n", valor_saque/10);
    valor_saque = valor_saque % 10;

    printf("    *5: %d\n", valor_saque/5);
    valor_saque = valor_saque % 5;

    printf("    *1: %d\n", valor_saque/1);
    valor_saque = valor_saque % 1;

    return 0;
}