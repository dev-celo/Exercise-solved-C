#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia nome, salário e comissão, sabendo que uma certa loja paga um salário fixo + 15% de suas vendas totais.
Sabendo disso desenvolva um programa para calcular o salário final = salario fixo + 15% das vendas. 
Imprima na tela nome e salario final.*/

int main()
{
   char nome_V [21];
   double salario_F, comissao;
   double total;

   printf("\nDigite seu nome: ");
   fgets(nome_V, 21, stdin);  // fgets para inserção do nome.

   printf("\nDigite seu salario fixo: ");
   scanf("%lf", &salario_F);     // ler salário

   printf("\nDigite suas vendas mensal: ");
   scanf("%lf", &comissao);    // ler os numeros pedidos

   total = ((0.15 * comissao) + salario_F); //calcular salário final

   //dados de saída
   printf("\nNome do funcionario: %s", nome_V);
   printf("\nsalario mensal = %.2lf", total);
}
