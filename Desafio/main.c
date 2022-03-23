#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*faça um programa que recebe numeros inteiros de entrada digitado pelo usuário, a condição de parada é 0.
Em seguida retorne a quantidade de números digitados, o maior valor, o menor valor e a média desses números*/


int main()
{
    setlocale(LC_ALL,"portuguese");

    int numerodigitado, numeroaux;
    int qtd = 0;
    float media, soma = 0;
    int x = 0, y = 0;

    do {
        printf("\nDigite um numero (0 para encerrar): ");
        scanf("%i", &numerodigitado);

        //conferindo numeros digitados, somando e atribuindo o numero digitado a var. auxiliar
        if (numerodigitado > 0){
              qtd++;
              soma += numerodigitado;
              numeroaux = numerodigitado;
        }

        if (qtd == 1){
            x = numeroaux;
            y = numeroaux;
        } 
        else if (numerodigitado == 0){
            printf("Número zero digitado")
            break;
          
        else if (numerodigitado > x){
            x = numerodigitado;
        }
        else if (numerodigitado < y){
            y = numerodigitado;
        }
    } while (numerodigitado > 0);

    media = soma / qtd;

    printf("\n===*===*===*===*===*===*===*===*===*===*===*===*===\n");
    printf("\nQuantidade de numeros digitados: %i\n", qtd);
    printf("\nMedia dos numeros digitado: %.2f\n", media);
    printf("\nMaior valor: %i\n", x);
    printf("\nMenor valor: %i\n", y);

    return 0;
}
