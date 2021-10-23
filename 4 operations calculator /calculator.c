#include <stdio.h>
#include <stdlib.h>

/*
    Desenvolva um algoritmo que peça a entrada de 2 números inteiros, o usuário
    deverá escolher quais das 4 operações básicas deseja realizar.

    Develop an algorithm that ask the entrance of 2 numbers int, the user must 
    choose which of the 4 basic operations want to perform.
*/

/*
    @author: Marcelo H P Silva
    date : 22-10-2021
*/

int main(){
    //declaração de variáveis || declaration of variables.
    int num1;
    int num2;
    int result = 0; //inicialize the variable result
    int op;

    //printf imprime a mensagem na tela || printf print the message of the screen
    printf("Escolha uma opcao abaixo: \n");
    printf("######################");
    printf("\n1 - Soma");
    printf("\n2 - Subtracao");
    printf("\n3 - multiplicacao");
    printf("\n4 - Divisao");
    printf("\n######################");
    printf("\nopcao: ");

    //scanf lê o numero digitado e coloca-o na área de memoria correspondente a num1
    //scanf read digited numbers and puts it in the memory area corresponding to num1
    scanf("%d", &op);

    system("pause");

    
    printf("\nDigite o primeiro número: "); 
    scanf("%d", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &num2);

    //switch case para escolher qual operação o usuário quer realizar
    //switch case for choose whinch operations the user want to peform
    switch (op)
    {
    case 1: //sum
        printf("\nOperação selecionada: Soma");
        result = num1 + num2;
        break;

    case 2: //subtract
        printf("\nOperação selecionada: Subtração");
        result = num1 - num2;
        break;

    case 3: //multiplies
        printf("\nOperação selecionada: Multiplicação");
        result = num1 * num2;
        break;
    
    case 4: //divide
        printf("\nOperação selecionada: Divisão");
        result = num1 / num2;
        break;

    default: //invalid command
        printf("\nValor invalido.");
        break;
    }

    printf("\n");

    printf("Resultado: %d\n", result);

    return 0;
}
