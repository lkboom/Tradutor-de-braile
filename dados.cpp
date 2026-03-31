#include "dados.h"
#include <cstdint>
// L COMENTARIOS TEMPORÁROS: lns 9, 12, 16, 74

<<<<<<< HEAD

// Esse arquivo DEFINE todas as variáveis e constantes dos dados.h

const int MAX_TEXTO = 100;
char texto_input[MAX_TEXTO]; // (texto - texto_input)
int tamanho_texto = 0;
const int TOTAL_CARACTERES = 30;
uint8_t braile_input = 0b000000; // (matriz matriz_input - int braile_input)


//Alfabeto de braile em forma de array
const uint8_t ARRAY_DADOS[TOTAL_CARACTERES] = { // nome mudado (matriz-array)
    0b100000, //A

    0b010000, //A

    0b101000, //B

    0b010100, //B

    0b110000, //C 
    
    0b110100, //D
    
    0b100100, //E
    
    0b111000, //F
    
    0b111100, //G
    
    0b101100, //H
    
    0b011000, //I
    
    0b011100, //J
    
    0b100010, //K

    0b010001, //K
    
    0b101010, //L

    0b010101, //L
    
    0b110010, //M
    
    0b110110, //N
    
    0b100110, //O
    
    0b111010, //P
    
    0b111110, //Q
    
    0b101110, //R
    
    0b011010, //S
    
    0b011110, //T
    
    0b100011, //U
    
    0b101011, //V    
    
    0b011101, //W
    
    0b110011, //X
    
    0b110111, //Y
    
    0b100111, //Z
    
=======

// Esse arquivo DEFINE todas as variáveis e constantes dos dados.h

const int MAX_TEXTO = 100;
char texto[MAX_TEXTO];
int tamanho_texto = 0;
const int TOTAL_CARACTERES = 26;
int matriz_input[3][2] = {
    {0,0},
    {0,0},
    {0,0}
};


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
>>>>>>> 42cd762120f010596c07fb65de9896009d73b8a5

};


//Alfabeto de caracteres comuns pra associação na tradução
<<<<<<< HEAD
const char ARRAY_ASS_CHAR[TOTAL_CARACTERES] = { // nome mudado (matriz traducao-array ass char)
=======
const char MATRIZ_TRADUCAO[TOTAL_CARACTERES] = {
>>>>>>> 42cd762120f010596c07fb65de9896009d73b8a5
    'A',
    'A',
    'B',
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
<<<<<<< HEAD
    'K',
    'L',
=======
>>>>>>> 42cd762120f010596c07fb65de9896009d73b8a5
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