#include <iostream>

void produto(int*,int,int);

int main(){

    int op1,op2,res;
    std::cout << "Digite o operando1 "; //Supondo 3
    std::cin >> op1;

    std::cout << "Digite o operando2 ";//Supondo 4
    std::cin >> op2;

    produto(&res,op1,op2);

    std::cout << res << std::endl; //12

    return 0;
}

void produto(int* r,int op1,int op2){

    *r = op1 * op2;
    
}