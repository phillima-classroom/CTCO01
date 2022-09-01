#include <iostream>

struct tipo1{
    int op1,op2,op3;
    double op4;
};

int main(){

    tipo1 x;
    std::cout << "O tamanho do tipo1:  " << sizeof(x) << std::endl;

    tipo1 vetor[5];
    std::cout << "O tamanho do tipo1[5]:  " << sizeof(vetor) << std::endl;

    tipo1* endX;
    std::cout << "O endereço para tipo1:  " << endX << std::endl;
    std::cout << "O endereço para tipo1 + 1:  " << ++endX << std::endl;
  
    return 0;
}
