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
  for(int i = 0; i <= 5; i++){
      braile_input &= ~(1 << i);
    }
}

void modify(){
  cancelar_letra();
  braile_input = braile_input ^ (1 << 6);
}

// Compara se o valor do input é igual a algum da lista de todos os caracteres
void traduzir(uint8_t input) {
  // 1. Verifica se o input é o modificador
  if (compara_braile(input, modifier)) {
    modify();
    return; // Sai da função para não processar o resto
  }

  // 2. Verifica se o input é o caractere '_' (índice 42)
  if (compara_braile(input, ARRAY_DADOS[42])) {
    // Se o bit 6 estiver ativo (1)
    if (braile_input & (1 << 6)) {
      adicionar(ARRAY_ASS_CHAR[42]);
      braile_input &= ~(1 << 6); // MODIFICA: desliga o bit 6
    } 
    // Se o bit 6 NÃO estiver ativo (0)
    else {
      adicionar(ARRAY_ASS_CHAR[42]);
      // NÃO modifica o bit 6 (ele permanece 0)
    }
    cancelar_letra(); // Limpa os pontos Braille após adicionar
    return;
  }

  // 3. Processamento normal para outros caracteres
  for (int i = 0; i < TOTAL_CARACTERES; i++) {
    if (compara_braile(input, ARRAY_DADOS[i])) {
      adicionar(ARRAY_ASS_CHAR[i]);
      cancelar_letra();
      // Opcional: Se quiser que qualquer letra desligue o modifier, 
      // adicione braile_input &= ~(1 << 6); aqui.
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
  
