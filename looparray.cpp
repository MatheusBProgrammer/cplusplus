// Figura 7.5: fig07_05.cpp
// Configura o array lista para conter os inteiros de 1 a 10.
#include <iostream> // Inclui a biblioteca de entrada e saída
#include <iomanip>  // Inclui a biblioteca de manipulação de entrada e saída

using std::cout; // Usa cout do namespace std
using std::endl; // Usa endl do namespace std
using std::setw; // Usa setw do namespace std

int main() // Função principal onde a execução do programa começa
{
    int arraySize = 10;   // Declara uma variável para o tamanho do array
    int lista[arraySize]; // Declara um array de inteiros chamado 'lista' com 10 elementos

    // O que é um array?
    // Um array é uma coleção de elementos do mesmo tipo, armazenados em locais de memória contíguos.
    // No caso acima, 'lista' é um array de 10 inteiros. Cada elemento do array pode ser acessado usando um índice.
    // Os índices em C++ começam do zero, então os índices válidos para 'lista' são de 0 a 9.

    // Loop para inicializar o array
    for (int i = 0; i < arraySize; i++) // Loop que itera de 0 a 9 (10 iterações)
    {
        lista[i] = i + 1; // Atribui a cada elemento do array 'lista' o valor de i + 1
        // Explicação:
        // Na primeira iteração, i é 0, então lista[0] = 0 + 1, ou seja, lista[0] = 1.
        // Na segunda iteração, i é 1, então lista[1] = 1 + 1, ou seja, lista[1] = 2.
        // Isso continua até a décima iteração, onde i é 9, então lista[9] = 9 + 1, ou seja, lista[9] = 10.
    }

    // Loop para imprimir os valores do array
    for (int i = 0; i < arraySize; i++) // Loop que itera de 0 a 9 (10 iterações)
    {
        cout << lista[i] << endl; // Imprime cada elemento do array 'lista' seguido de uma nova linha
        // Explicação:
        // Na primeira iteração, lista[0] é 1, então é impresso 1.
        // Na segunda iteração, lista[1] é 2, então é impresso 2.
        // Isso continua até a décima iteração, onde lista[9] é 10, então é impresso 10.
    }

    // Imprime o quarto elemento do array (índice 3)
    cout << lista[3] << endl; // Imprime o elemento na posição 3 do array, que é o número 4
    // Explicação:
    // O array 'lista' foi inicializado com os valores de 1 a 10.
    // lista[3] corresponde ao quarto elemento, que é o número 4.

    return 0; // Indica que o programa terminou com sucesso
} // fim de main
