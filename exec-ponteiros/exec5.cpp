#include <iostream>

int main(){

    int vetor[] = {1,2,3,4,5};

    int tam = sizeof(vetor)/sizeof(int);
    
    std::cout << "Tamanho do vetor (bytes): " << sizeof(vetor) << std::endl;

    for(int i = 0; i < tam; i++){
        std::cout << "Valor do elemento na posição " << i << ": " << vetor[i] << " Endereço: " << &vetor[i] << " \n";
    }

    return 0;

}
