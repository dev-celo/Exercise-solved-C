#include <stdio.h>
#include <stdlib.h>

int main()
{
    void concatenarstrings (char string1[], int tam1,
                            char string2[], int tam2,
                            char string3[], int tam3,
                            char string4[]
    );

    char palavra1[] = {'M', 'e', 'u', ' '};
    char palavra2[] = {'n', 'o', 'm', ' e', ':', ''};
    char palavra3[] = {'M', 'a', 'r', 'c', 'e', 'l', 'o', '', 'H'};
    char novaPalavra[17];

    concatenarstrings(palavra1, 4, palavra2, 6, palavra3, 9, novaPalavra);

    for(int i = 0; i < 17; ++i){
        printf("%c", novaPalavra[i]);
    }

    return 0;
}
void concatenarstrings (char string1[], int tam1,
                        char string2[], int tam2,
                        char string3[], int tam3,
                        char string4[]){
    
    //lógica 
    for(int i = 0; i < t1; ++i){
        string4[i] = string1[i];
    }
    for(int j = 0; j < t2; ++j){
        string4[t1 + j] = string2[j];
    }
    for(int k = 0; k < t3; ++k){
        string4[t1 + t2 + k] = string3[k];
    }
}
