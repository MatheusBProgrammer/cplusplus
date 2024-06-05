// main.cpp
#include <iostream>
#include "maximum.h" // inclui a definição do template de função maximum

int main()
{
    // Demonstra maximum com valores int
    int int1, int2, int3;
    std::cout << "Input three integer values: ";
    std::cin >> int1 >> int2 >> int3;

    // Chama o template de função maximum com tipos int
    // O compilador cria uma versão da função para int
    std::cout << "The maximum integer value is: " << maximum(int1, int2, int3) << std::endl;

    // Demonstra maximum com valores double
    double double1, double2, double3;
    std::cout << "\nInput three double values: ";
    std::cin >> double1 >> double2 >> double3;

    // Chama o template de função maximum com tipos double
    // O compilador cria uma versão da função para double
    std::cout << "The maximum double value is: " << maximum(double1, double2, double3) << std::endl;

    // Demonstra maximum com valores char
    char char1, char2, char3;
    std::cout << "\nInput three characters: ";
    std::cin >> char1 >> char2 >> char3;

    // Chama o template de função maximum com tipos char
    // O compilador cria uma versão da função para char
    std::cout << "The maximum character value is: " << maximum(char1, char2, char3) << std::endl;

    return 0; // indica terminação bem-sucedida
}
