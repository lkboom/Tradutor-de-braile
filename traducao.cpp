#include "dados.h"
#include <stdint.h>

//Arquivo destinado as funções relacionadas a tradução de matrizes em carateres de braile
//e alteração da string principal

//Compara código bool de braile com o alfabeto
bool compara_braile(uint8_t input, const uint8_t compara){ // (comparar_matrizes - compara_braile)
    if (input != compara){
        return false;
    }
    return true;
}

//Adiciona alguma letra ou valor simples à string de texto principal
void adicionar(char caractere) {
    if (tamanho_texto < MAX_TEXTO - 1) {
        texto_input[tamanho_texto++] = caractere;
        texto_input[tamanho_texto] = '\0'; // indica o fim da string
    }
}

//
void cancelar_letra(){
  braile_input = 0;
}

// Compara se o valor do input é igual a algum da lista de todos os caracteres
void traduzir(uint8_t input){
  for(int i = 0; i <TOTAL_CARACTERES; i++){
    if(compara_braile(input, ARRAY_DADOS[i])){
      adicionar(ARRAY_ASS_CHAR[i]);
      cancelar_letra();
    }
  }
}



//Apaga o texto guardado por completo
void excluir_texto(uint8_t input){
    texto_input[0] = '\0';
    tamanho_texto = 0;
    cancelar_letra();
}

void funcDel(uint8_t input){

  if(input == 0){
    excluir_texto(input);
  }else{
    cancelar_letra();
  }

}
  
