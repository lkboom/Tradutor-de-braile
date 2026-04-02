#pragma once

#include <stdint.h>

// L COMENTARIOS TEMPORARIOS: ln 17


// Arquivo destinado a DELCARAR variáveis e constantes prncipais

// Relacionados a string principal de texto
extern const int MAX_TEXTO; // 100 
extern char texto_input[];
extern int tamanho_texto; // tamanho atual

// Relacionados a tradução
extern uint8_t braile_input;

// Alfabeto
extern const int TOTAL_CARACTERES; // 26 atualmente
extern const uint8_t ARRAY_DADOS[30]; // caracteres em braile
extern const char ARRAY_ASS_CHAR[30]; // nome trocado (traducao-ass_char)

