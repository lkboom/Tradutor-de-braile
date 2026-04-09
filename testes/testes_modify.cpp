#include <iostream>
#include  <cstdint>
using namespace std;

void print_matrix(uint8_t valor){  
    for (int i = 7; i >= 0; i--) {
        cout<< ((valor >> i) & 1);
    }
    cout<<"\n";
}

int main(){

    uint8_t x = 0b1001111;

    print_matrix(x);
    for(int i = 0; i <= 5; i++){
      x &= ~(1 << i);
    }
    print_matrix(x);

    return 0;
}