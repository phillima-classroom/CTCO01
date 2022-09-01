#include <iostream>

void populaMatriz(int*,int);
void percorrerMatriz(int*,int);

int main(){

    int ordem;
    std::cout << "Digite a ordem da matriz: ";
    std::cin >> ordem;

    int matriz[ordem][ordem];

    populaMatriz(&matriz[0][0],ordem);
    percorrerMatriz(&matriz[0][0],ordem);

    return 0;

}

void percorrerMatriz(int* matriz, int ordem){

    for(int i = 0; i < ordem*ordem; i++){
        std::cout << *(matriz+i) << " ";
        if((i+1)%ordem==0)  
            std::cout << std::endl;
    }
    std::cout << std::endl;
}

void populaMatriz(int* matriz, int ordem){

    for(int i = 0; i < ordem*ordem; i++){
        std::cout << "Digite o elemento na posição ( " << i/ordem << " , " << i%ordem << " ): ";;
        std::cin >> *(matriz+i); 
    }
}