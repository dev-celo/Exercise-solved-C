#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que possui uma função que recebe como argumento um vetor de tamanho 5 de tipo estrutura
sendo que essa estrutura deve armazenar um determinado horário no formato hh:mm:ss, peça que o usuário
digite 5 horários diversos que deverão ser armazendos no argumento recebido. Crie uma segunda função que
receberá este msmo vetor estrutura mas dessa vez a função deverá apenas ler os valores armazendos no vetor
estrtura mostrando uma mensagem apropriada.*/

//definindo a struct
struct hora
    {
        int hora;
        int minuto;
        int segundo;
    };

int main()
{
    void receberHorario (struct hora agora [5]);
    void printHorario (struct hora agora [5]);
    struct hora agora[5];
    chamada das funções
    receberHorario(agora);
    printHorario(agora);

}
//lendo dados
void receberHorario (struct hora agora [5]){

    for (int i = 0; i < 5; ++i){
        printf("Digite o %i horario (hh:mm:ss): ", i +1);
        scanf("%i:%i:%i", &agora[i].hora,
                          &agora[i].minuto,
                          &agora[i].segundo);
    }
}
//imprimindo dados
void printHorario (struct hora agora [5]){

    for (int i = 0; i < 5; ++i){
        printf("O %i horario e: %i:%i:%i\n", i + 1,
                                           agora[i].hora,
                                           agora[i].minuto,
                                           agora[i].segundo);
    }
}
