#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Desenvolva um algoritmo que calcule o fatorial de um numero x.
    develop an algoritm that calculates the number factorial 'x'
*/

/*
    @author: Marcelo H P Silva
    date : 26-10-2021
*/



//calculates factorial using "for"
int factorial_loop_for(int num)
{
    int factorial = 1;

    for(factorial = 1; num > 1; num--){ //n-- = n = n-1
        factorial *= num; //factorial *= number; = factorial = factorial * number;
    }
    return (factorial);
}

//calculates factorial using while
int factorial_loop_while(int num)
{
    int factorial = 1;

    while(num >= 1){
        factorial *= num;
        --num;
    }
    
    return (factorial);
}

//two ways of calculates factorial
int main(){
    setlocale(LC_ALL, "portuguese");

    int number, fat, op;

    printf("Calculadora fatorial");
    printf("\nDigite um valor a ser calculado: ");
    scanf("%d", &number); //read value of number to be calculated

    printf("Digite 1 para calcular usando o for\n");
    printf("Digite 2 para calcular usando o while\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1: //case the user read 1, call the function "..._loop_for"
        fat = factorial_loop_for(number);
        break;
    case 2: //case the user read 2, call the function "..._loop_for"
        fat = factorial_loop_while(number);
        break;
    default: //defalt don't call any function
        printf("Escolha inválida\n");
        break;
    }

    //exit the fat of "switch case"
    printf("Resultado do fatorial: %d\n", fat);

    return 0;
}