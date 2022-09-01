#include <iostream>

void populaVetor(int*,int);
void percorrerVetor(int*,int);

int main(){

    int tam;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tam;
    int vetor[tam];
    populaVetor(vetor,tam);
    percorrerVetor(vetor,tam);
    return 0;

}

void populaVetor(int* vetor, int tam){

    for(int i = 0; i < tam; i++){
        std::cout << "Digite o elemento na posição " << i << ": ";
        std::cin >> *(vetor+i);    
    }
}

void percorrerVetor(int* vetor, int tam){

    for(int i = 0; i < tam; i++)
        std::cout << *(vetor+i) << " ";  
    std::cout << std::endl;
}