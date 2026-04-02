// C++ code

#include <stdint.h>

//#include "matrizes.cpp"
#include "dados.h"
#include "traducao.h"

// buzzer
const int buzzerPin = 8;

// VERIFICAÇÃO DE MATRIZES 6 BOTOES PRINCIPAIS


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
}

//------------SETUP-------------------
void setup(){

	Serial.begin(9600);
	Serial.println("TESTE");
  
	// PORTAS
	// botões do braile
	pinMode(13, INPUT_PULLUP);
	pinMode(12, INPUT_PULLUP);
	pinMode(10, INPUT_PULLUP);
	pinMode(7, INPUT_PULLUP);
	pinMode(6, INPUT_PULLUP);
	pinMode(5, INPUT_PULLUP);

    //BOTÕES DE AÇÕES
    pinMode(4, INPUT_PULLUP);
	pinMode(3, INPUT_PULLUP);
	pinMode(2, INPUT_PULLUP);
	
	// buzzer
	pinMode(8, OUTPUT);

	  
	print_matrix(braile_input);

}


//----------------LOOP-------------------
void loop(){

    // le a porta enquanto o botão for pressionado e roda o verificador que troca os valores
    if(digitalRead(13) == LOW){
    write_matrix(2);}

    if(digitalRead(12) == LOW){
    write_matrix(1);}

    if(digitalRead(10) == LOW){
    write_matrix(0);}

    if(digitalRead(7) == LOW){
    write_matrix(5);}  

    if(digitalRead(6) == LOW){
    write_matrix(4);}

    if(digitalRead(5) == LOW){
    write_matrix(3);}

	// botões de função

	if(digitalRead(2) == LOW){
	 	traduzir(braile_input);
		Serial.println(texto_input);
		print_matrix(braile_input);
		delay(300);
	}
	//if(digitalRead(3) == LOW){   
    //	funcSubmit();
	//}
	if(digitalRead(4) == LOW){
	 	funcDel(braile_input);
		Serial.println(texto_input);
		print_matrix(braile_input);
		delay(300);
	}	
  
  delay(10);
}
