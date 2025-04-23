#include <iostream>
#include <string>

int main(){
    std::cout << "Qual a sua idade?" << std::endl;
    int idade;
    std::cin >> idade;
    
    std::cout << "Qual o seu nome?" << std::endl;
    std::string nome;
    std::cin >> nome;
    
    std::cout << "Seu nome e " << nome << ", e Tem " << idade << " anos.";
    
    return 0;
}