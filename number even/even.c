#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Desenvolva um algoritmo que peça a entrada de 5 número inteiro, o programa deve retornar
    quantos números pares tem.
    Develop an algorithm that ask the entrance of 5 int number, the program must return how many
    even numbers are there.
*/

/*
    @author: Marcelo H P Silva
    date : 23-10-2021
*/

int main(){
    setlocale(LC_ALL, "portuguese");

    int numeros[5];
    int par = 0; //inicialize variable

    printf("Digite 5 números: \n");
    //cont is the count variable
    for(int cont = 0; cont < 5; cont++){
        scanf("%d", &numeros[cont]);

        //if even, par = par + 1;
        if(numeros[cont] % 2 == 0)//'cont' controls the position of vector
            ++par;
    }
    //exit
    printf("números pares: %d\n", par);

    return 0;
}