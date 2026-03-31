#include "dados.cpp"
#include <cstdint>


<<<<<<< HEAD
//Compara código bool de braile com o alfabeto
bool compara_braile(uint8_t input, const uint8_t compara){ // (comparar_matrizes - compara_braile)
  if (input != compara){
    return false;
  }else{
    return true;
=======
//Arquivo destinado as funções relacionadas a tradução de matrizes em carateres de braile
//e alteração da string principal

//Compara duas matrizes, index por index
bool comparar_matrizes(int input[3][2], const int matriz_comparada[3][2]){
  for(int linha = 0; linha < 3; linha++){
    for(int coluna = 0; coluna < 2; coluna++){
      if (input[linha][coluna] != matriz_comparada[linha][coluna]){

        //Caso qualquer valor seja diferente, retornará false
        return false;
      }
    }
>>>>>>> 42cd762120f010596c07fb65de9896009d73b8a5
  }
}

//Adiciona alguma letra ou valor simples à string de texto principal
void adicionar(char caractere) {
    if (tamanho_texto < MAX_TEXTO - 1) {
<<<<<<< HEAD
        texto_input[tamanho_texto++] = caractere;
        texto_input[tamanho_texto] = '\0'; // indica o fim da string
    }
}

// Compara se o valor do input é igual a algum da lista de todos os caracteres
void traduzir(uint8_t input){
  for(int i = 0; i <TOTAL_CARACTERES; i++){
    if(compara_braile(input, ARRAY_DADOS[i])){
      adicionar(ARRAY_ASS_CHAR[i]);
=======
        texto[tamanho_texto++] = caractere;
        texto[tamanho_texto] = '\0';
    }
}

// Compara se o valor so input é igual a algum da matriz de todos os caracteres
void traduzir(int input[3][2]){

  
  for(int i = 0; i < TOTAL_CARACTERES; i++){
    if(comparar_matrizes(input, MATRIZ_DADOS[i])){
      adicionar(MATRIZ_TRADUCAO[i]);
>>>>>>> 42cd762120f010596c07fb65de9896009d73b8a5
    }
  }
}


//Printa uma representação da matriz do input pra fazer DEBUG NO TERMINAL
void print_matrix_teste(int input[3][2]){

	for (int y = 0; y < 3; y++) {         // 3 linhas, ou seja um valor de y por linha
		for (int x = 0; x < 2; x++) {       // 2 colunas/blocos por linha, ou seja, dois x em cada
			std::cout << input[y][x];  // exibe as teclas selecionadas
			std::cout << " ";
		}
	std::cout << "\n";
	}
	std::cout << "----------\n";
}

//Deixa o input zerado
void cancelar_letra(int input[3][2]){
  for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            input[i][j] = 0;
        }
    }
}

//Apaga o texto guardado por completo
void excluir_texto(int input[3][2]){
  texto[0] = '\0';
  tamanho_texto = 0;
  cancelar_letra(input);
}


  
