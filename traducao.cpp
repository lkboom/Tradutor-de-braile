
#include "dados.h"

//Compara duas matrizes, index por index
bool comparar_matrizes(int input[3][2], const int matriz_comparada[3][2]){
  for(int linha = 0; linha < 3; linha++){
    for(int coluna = 0; coluna < 2; coluna++){
      if (input[linha][coluna] != matriz_comparada[linha][coluna]){

        //Caso qualquer valor seja diferente, retornará false
        return false;
      }
    }
  }

  //caso o proceso termine sem achar erros, retorna true
  return true;
}

//Adiciona alguma letra ou valor simples à string de texto principal
void adicionar(char caractere) {
    if (tamanho_texto < maximo_texto - 1) {
        texto[tamanho_texto++] = caractere;
        texto[tamanho_texto] = '\0';
    }
}

// Compara se o valor so input é igual a algum da matriz de todos os caracteres
void traduzir(int input[3][2]){

  
  for(int i = 0; i <5; i++){
    if(comparar_matrizes(input, matriz_dados[i])){
      adicionar(matriz_traducao[i]);
    }
  }
}

