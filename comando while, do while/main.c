#include <stdio.h>
#include <stdlib.h>

int main()
{

   //Dado de entrada um número de 0 a 10 apresente seu sucessor até chegar no sucessor de 9

   int numero;

   printf("\nDigite um numero de 0 a 10: "); // exibir mensagem

   do {  //"do while" tratamento de erro
   //ler numero digitado
   scanf("%i", &numero);
   //numeros fora do intervalo não é permitido
   if (numero < 0 || numero > 10)
    printf("\n Numero invalido. tente novamente: ");

   }while (numero < 0 || numero > 10);

   //lógica do exercicío 
   while (numero < 10){
     printf("o sucessor de %i = %i\n", numero, numero+1);
     numero++;
   }

   return 0;
}
