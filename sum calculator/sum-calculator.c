#include <stdio.h>

//Desenvolva um algoritmo que peça a entrada de 2 números inteiros e some-o
//develop an algorithm that ask the entrance of 2 numbers int and add the.

int main(){
    //declaração de variáveis || declaration of variables.
    int num1;
    int num2;
    int sum = 0; //inicialize the variable sum

    //printf imprime a mensagem na tela || printf print the message of the screen
    printf("\nDigite o primeiro número: ");

    //scanf lê o numero digitado e coloca-o na área de memoria correspondente a num1
    //scanf read digited numbers and puts it in the memory area corresponding to num1
    scanf("%d", &num1);

    //printf imprime a mensagem na tela || printf print the message of the screen
    printf("\nDigite o segundo número: ");
    
    //scanf lê o numero digitado e coloca-o na área de memoria correspondente a num2
    //scanf read digited numbers and puts it in the memory area corresponding to num2
    scanf("%d", &num2);

    //Operador aritmético '+'
    //arithmetic operator '+'

    sum  = num1 + num2; //others operators '+' '-' '/' '*'

    printf("\n");
    //imprimindo a saída da soma "sum"
    printf("Resultado da soma: %d\n", sum);

    //if all ok, return 0
    return 0;
}