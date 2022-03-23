#include <stdio.h>
#include <stdlib.h>

int main()
{
    //maneiras de declarar string

    //char palavra[6] = {'b', 'r', 'a', 's', 'i', 'l'};
    //char palavra[] = {'b', 'r', 'a', 's', 'i', 'l'};
    //char palavra[7] = {"brasil"};
    //char palavra[] = {"brasil"};
    char palavra[7] = "brasil\0";

    /* "\0" caractere nulo de uma string
    só ocupa um espaço pois é um caractere como o %i
    por exemplo*/

    printf("%s", palavra);

    return 0;
}
