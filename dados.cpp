#include "dados.h"

const int maximo_texto = 100;
char texto[maximo_texto];
int tamanho_texto = 0;

const int matriz_dados[5][3][2] = {

    {
        //A
        {1,0},
        {0,0},
        {0,0}
    },
    {
        //B
        {1,0},
        {1,0},
        {0,0}
    },
    {
        //C
        {1,1},
        {0,0},
        {0,0}
    },
    {
        //D
        {1,1},
        {0,1},
        {0,0}
    },
    {
        //E
        {1,0},
        {0,1},
        {0,0}
    },

};

const char matriz_traducao[5] = {
    'A',
    'B',
    'C',
    'D',
    'E'
};