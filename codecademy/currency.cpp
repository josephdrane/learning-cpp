#include <iostream>

int main() {
    
    double pesos, reais, soles, dollars;

    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    dollars = (0.045 * pesos) + (0.19 * reais) + (3.51 * soles);

    std::cout << "US Dollars = $" << dollars << "\n";
    
    return 0;
}