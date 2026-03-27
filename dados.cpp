#include "dados.h"


// Esse arquivo DEFINE todas as variáveis e constantes dos dados.h

const int MAX_TEXTO = 100;
char texto[MAX_TEXTO];
int tamanho_texto = 0;
const int TOTAL_CARACTERES = 26;


//Alfabeto de braile em forma de matrizes
const int MATRIZ_DADOS[TOTAL_CARACTERES][3][2] = {

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
    { //F
        {1,1},
        {1,0},
        {0,0}
    },
    { //G
        {1,1},
        {1,1},
        {0,0}
    },
    { //H
        {1,0},
        {1,1},
        {0,0}
    },
    { //I
        {0,1},
        {1,0},
        {0,0}
    },
    { //J
        {0,1},
        {1,1},
        {0,0}
    },
    { //K
        {1,0},
        {0,0},
        {1,0}
    },
    { //L
        {1,0},
        {1,0},
        {1,0}
    },
    { //M
        {1,1},
        {0,0},
        {1,0}
    },
    { //N
        {1,1},
        {0,1},
        {1,0}
    },
    { //O
        {1,0},
        {0,1},
        {1,0}
    },
    { //P
        {1,1},
        {1,0},
        {1,0}
    },
    { //Q
        {1,1},
        {1,1},
        {1,0}
    },
    { //R
        {1,0},
        {1,1},
        {1,0}
    },
    { //S
        {0,1},
        {1,0},
        {1,0}
    },
    { //T
        {0,1},
        {1,1},
        {1,0}
    },
    { //U
        {1,0},
        {0,0},
        {1,1}
    },
    { //V
        {1,0},
        {1,0},
        {1,1}
    },
    { //W
        {0,1},
        {1,1},
        {0,1}
    },
    { //X
        {1,1},
        {0,0},
        {1,1}
    },
    { //Y
        {1,1},
        {0,1},
        {1,1}
    },
    { //Z
        {1,0},
        {0,1},
        {1,1}
    }

};


//Alfabeto de caracteres comuns pra associação na tradução
const char MATRIZ_TRADUCAO[TOTAL_CARACTERES] = {
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J',
    'K',
    'L',
    'M',
    'N',
    'O',
    'P',
    'Q',
    'R',
    'S',
    'T',
    'U',
    'V',
    'W',
    'X',
    'Y',
    'Z'
};