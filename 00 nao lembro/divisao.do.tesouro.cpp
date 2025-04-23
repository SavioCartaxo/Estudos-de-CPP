#include <iostream>

int main(){
    int moedas, marinheiros;

    std::cin >> moedas;
    std::cin >> marinheiros;
    marinheiros += 2;

    int capitao = (moedas / marinheiros) * 2;
    std::cout << capitao;

    return 0;
}