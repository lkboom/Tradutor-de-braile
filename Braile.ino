// C++ code

#include "matrizes.cpp"
#include "dados.cpp"
#include "traducao.cpp"

// buzzer
const int buzzerPin = 8;

// VERIFICAÇÃO DE MATRIZES 6 BOTOES PRINCIPAIS

int matriz_base[3][2]={ // estrutura base das matrizes
	{0,0},
	{0,0},
	{0,0}};
int matriz_input[3][2]; // clone vazio da matriz base

// Função pra debug do input
void print_matrix(){

	for (int y = 0; y < 3; y++) {         // 3 linhas, ou seja um valor de y por linha
		for (int x = 0; x < 2; x++) {       // 2 colunas/blocos por linha, ou seja, dois x em cada
			Serial.print(matriz_input[y][x]); // exibe as teclas selecionadas
			Serial.print(" ");
		}
	Serial.println();
	}
	Serial.println("--------");
}

// Escreve 1 ou 0 no valor desejado da matriz
void write_matrix(int linha,int coluna){ // esse aqui até liah entende mas substitui os valores entre 0 e 1
	if (matriz_input[linha][coluna] == 0){
		matriz_input[linha][coluna] = 1;

		// high pitch buzzer
		tone(buzzerPin, 1200);
		delay(250);
		noTone(buzzerPin);
		delay(100);

	}else{
		matriz_input[linha][coluna] = 0;

		// low pitch buzzer
		tone(buzzerPin, 300);
		delay(400);
		noTone(buzzerPin);
		delay(100);

	}

	print_matrix();
	delay(300);
}

//------------SETUP-------------------
void setup(){

	Serial.begin(9600);

  // clona a matriz vazia pra a input
	// RAMSÉS LEMBRE DE TRANSFORMAR EM FUNÇÃO
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			matriz_input[y][x] = matriz_base[y][x];
		}
	}
  
	// PORTAS
	// botões do braile
	pinMode(13, INPUT_PULLUP);
	pinMode(12, INPUT_PULLUP);
	pinMode(10, INPUT_PULLUP);
	pinMode(7, INPUT_PULLUP);
	pinMode(6, INPUT_PULLUP);
	pinMode(5, INPUT_PULLUP);
	
	// buzzer
	pinMode(8, OUTPUT);

	  
	print_matrix();

}


//----------------LOOP-------------------
void loop(){
  // le a porta enquanto o botão for pressionado e roda o verificador que troca os valores
  if(digitalRead(13) == LOW){
    write_matrix(0,1);}
  
  if(digitalRead(12) == LOW){
    write_matrix(1,1);}
  
  if(digitalRead(10) == LOW){
    write_matrix(2,1);}
  
  if(digitalRead(7) == LOW){
    write_matrix(0,0);}  
  
  if(digitalRead(6) == LOW){
    write_matrix(1,0);}
  
  if(digitalRead(5) == LOW){
    write_matrix(2,0);
  }

		// botões de função

	// if(digitalRead(2) == LOW){
	// 	funcSave();
	// }
	// if(digitalRead(3) == LOW){
	// 	funcSubmit();
	// }
	// if(digitalRead(4) == LOW){
	// 	funcDel();
	// }	
  
  delay(10);
}
