// C++ code

//Bibliotecas
#include <stdint.h>
#include <Bounce2.h>

//dados e funções externas
#include "dados.h"
#include "traducao.h"

//VARIÁVEIS
const int INTERVALO = 25;

const int brailePin [6] = {13,12,10,7,6,5};
const int indicesBraile [6] = {2, 1, 0, 5, 4, 3};
const int traduzirPin = 2;
const int excluirPin = 4;
const int buzzerPin = 8;

Bounce botoes_braile[6];
Bounce botao_traduzir = Bounce();
Bounce botao_excluir = Bounce();

// Função pra debug do input
void print_matrix(uint8_t valor){  
    for (int i = 7; i >= 0; i--) {
        Serial.print((valor >> i) & 1);
    }
    Serial.println();
}

// Escreve 1 ou 0 no valor desejado da matriz
void write_matrix(int pos){
	delay(300);
	braile_input = braile_input ^ (1 << pos);
    print_matrix(braile_input);

    if (bitRead(braile_input, pos)) {
        tone(buzzerPin, 600, 100); 
    } else {
        tone(buzzerPin, 300, 100);
    }
}

//------------SETUP-------------------
void setup(){

	Serial.begin(9600);
	Serial.println("TESTE");
  
	// PORTAS
	// botões do braile
    for(int i = 0; i < 6; i++){
        botoes_braile[i].attach(brailePin[i], INPUT_PULLUP);
        botoes_braile[i].interval(INTERVALO);
    }

    //BOTÕES DE AÇÕES
	botao_traduzir.attach(traduzirPin, INPUT_PULLUP);
    botao_traduzir.interval(INTERVALO);

	botao_excluir.attach(excluirPin, INPUT_PULLUP);
    botao_excluir.interval(INTERVALO);

    // buzzer
	pinMode(8, OUTPUT);

	  
	print_matrix(braile_input);

}


//----------------LOOP-------------------
void loop(){

    for (int i = 0; i < 6; i++) {
        botoes_braile[i].update();
    }
    botao_traduzir.update();
    botao_excluir.update();

    for (int i = 0; i < 6; i++) {
        if (botoes_braile[i].fell()) {
            write_matrix(indicesBraile[i]);
        }
    }    

	// botões de função
    if (botao_traduzir.fell()) {
        traduzir(braile_input);
        Serial.println(texto_input);
        print_matrix(braile_input);
        tone(buzzerPin, 700, 60);
        delay(130);
        tone(buzzerPin, 700, 60);
    }

    if (botao_excluir.fell()) {
        funcDel(braile_input);
        Serial.println(texto_input);
        print_matrix(braile_input);
        tone(buzzerPin, 200, 400);
    }   
		
  
    delay(10);
}
