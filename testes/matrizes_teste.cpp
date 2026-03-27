
#include <iostream>
#include "../dados.cpp"
#include "../traducao.cpp"


int input[3][2] = {
  {1,0},
  {0,1},
  {0,0}
};

int outra[3][2] = {
  {0,1},
  {1,0},
  {0,1}
};


int main(){

  // if (traduzir(input)){
  //   std :: cout << "Traduziu";
  // }else{
  //   std::cout << "Não traduziu";
  // }


  traduzir(input);
  int novo[3][2] = {
    {1,0},
    {0,0},
    {0,0}
  };
  traduzir(novo);
  std:: cout << texto << "\n";


  return 0;
}