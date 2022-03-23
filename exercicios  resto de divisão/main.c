#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que peçaa que o usuário digite dois números INTEIROS. O seu programa deve verificar se o
primeiro número é divisível pelo segundo e retornar na tela do usuário uma mensagem apropriada a verificação feita.*/

int main()

{
    setlocale(LC_ALL, "portuguese");

    int dividendo; 
    int divisor; 


    printf("Digite 2 numeros inteiros:\n");
    scanf("%i %i", &dividendo, &divisor); 


    if (b == 0) // Tratamento de erro
        printf("Divisao por 0 nao permitida");
    else if (a % b == 0) // resto da divisão = 0
        printf("%i é divisor de %i", a, b);
    else // não divisível
        printf("%i nao é divisor de %i", a, b); 

}
