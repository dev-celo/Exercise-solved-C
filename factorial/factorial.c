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

int main(){
    setlocale(LC_ALL, "portuguese");

    int factorial, number;

    printf("Calculadora fatorial");
    printf("\nDigite um valor a ser calculado: ");
    scanf("%d", &number); //read value of number to be calculated

    for(factorial = 1; number > 1; number--){ //n-- = n = n-1
        factorial *= number; //factorial *= number; = factorial = factorial * number;
    }

    printf("Resultado fatorial: %d\n", factorial);

    return 0;
}