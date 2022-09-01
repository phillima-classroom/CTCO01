#include <iostream>

int main(){

    int op1,op2;

    int* endOp1 = &op1;
    int* endOp2 = &op2;

    if(endOp1 > endOp2)
        std::cout << "O endereço " << endOp1 << " está a frente de " << endOp2 << std::endl;    
    else
        std::cout << "O endereço " << endOp2 << " está a frente de " << endOp1 << std::endl;    
  
    return 0;
}
