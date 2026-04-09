#include "dados.h"
#include <stdint.h>

// Esse arquivo DEFINE todas as variáveis e constantes dos dados.h

const int MAX_TEXTO = 100;
char texto_input[MAX_TEXTO]; 
int tamanho_texto = 0;
const int TOTAL_CARACTERES = 44;
uint8_t braile_input = 0b000000;
const uint8_t modifier = 0b010111;

//Alfabeto de braile em forma de array
const uint8_t ARRAY_DADOS[TOTAL_CARACTERES] = { 
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

    // numeros
    
    0b1100000, //1

    0b1010000, //1

    0b1101000, //2

    0b1010100, //2

    0b1110000, //3 
    
    0b1110100, //4
    
    0b1100100, //5
    
    0b1111000, //6
    
    0b1111100, //7
    
    0b1101100, //8
    
    0b1011000, //9
    
    0b1011100, //0

    // simbolos

    0b0, // _

    0b1000000 // _
};


//Alfabeto de caracteres comuns pra associação na tradução
const char ARRAY_ASS_CHAR[TOTAL_CARACTERES] = {  
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
    'K',
    'L',
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
    'Z',

    // numeros

    '1',
    '1',
    '2',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
    '0',

    // simbolos

    '_',
    '_'
};
