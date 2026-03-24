// C++ code

int base[3][2]={{0,0},{0,0},{0,0}};
int matriz_input[3][2];

// Função pra debug do input
void print_matrix(){

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			Serial.print(matriz_input[i][j]);
			Serial.print(" ");
		}
	Serial.println();
	}
	Serial.println("--------");
}

//Escreve 1 ou 0 no valor desejado da matriz
void write_matrix(int linha,int coluna){

	if (matriz_input[linha][coluna] == 0){
		matriz_input[linha][coluna] = 1;
	}else{
		matriz_input[linha][coluna] = 0;
	}

	print_matrix();
	delay(100);
}

//------------SETUP-------------------
void setup()
{

	Serial.begin(9600);

  //clona a matriz vazia pra a input
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			matriz_input[i][j] = base[i][j];
		}
	}
  
	pinMode(13, INPUT_PULLUP);
	pinMode(12, INPUT_PULLUP);
	pinMode(11, INPUT_PULLUP);
	pinMode(7, INPUT_PULLUP);
	pinMode(6, INPUT_PULLUP);
	pinMode(5, INPUT_PULLUP);

	  
	print_matrix();
	  
  
}


//----------------LOOP-------------------
void loop(){
  
  if(digitalRead(13) == LOW){
    write_matrix(0,1);}
  
  if(digitalRead(12) == LOW){
    write_matrix(1,1);}
  
  if(digitalRead(11) == LOW){
    write_matrix(2,1);}
  
  if(digitalRead(7) == LOW){
    write_matrix(0,0);}  
  
  if(digitalRead(6) == LOW){
    write_matrix(1,0);}
  
  if(digitalRead(5) == LOW){
    write_matrix(2,0);
  }
    

    
  
  
  
  delay(10);
}
