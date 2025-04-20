#include <iostream>

int main(){
    int distancia, saida;
    std::cin >> distancia;
    saida = (distancia -3) % 8 - 2;
    std::cout << saida;
    return 0;
}