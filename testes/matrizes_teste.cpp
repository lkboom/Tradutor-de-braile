
#include <iostream>
#include "../dados.cpp"
#include "../traducao.cpp"

int input[3][2] = {
  {0,1},
  {1,1},
  {0,0}
};

int outra[3][2] = {
  {0,1},
  {1,0},
  {0,1}
};


int main(){

  //Teste realizado quando traduzir() retornava valor em booleano
  // if (traduzir(input)){
  //   std :: cout << "Traduziu";
  // }else{
  //   std::cout << "Não traduziu";
  // }

  //Teste das funções traduzir e excluir_texto()
  // traduzir(input);
  // excluir_texto();
  // int novo[3][2] = {
  //   {1,0},
  //   {0,0},
  //   {0,0}
  // };
  // traduzir(novo);
  // std:: cout << texto << "\n";

  print_matrix_teste(input);
  cancelar_letra(input);
  print_matrix_teste(input);



  return 0;
}