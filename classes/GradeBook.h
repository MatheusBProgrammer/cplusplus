#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string> // Inclui a biblioteca de strings padrão do C++

// Declaração da classe GradeBook
class GradeBook
{
public:
    // Declaração do construtor que inicializa o nome do curso
    // O parâmetro 'const std::string &name' é uma referência constante a uma string
    GradeBook(const std::string &name);

    // Declaração da função membro que define o nome do curso
    // Recebe uma string constante por referência
    void setCourseName(const std::string &name);

    // Declaração da função membro que obtém o nome do curso
    // O 'const' após a função indica que ela não altera nenhum membro da classe
    std::string getCourseName() const;

    // Declaração da função membro que exibe uma mensagem de boas-vindas
    // Esta função também é constante, garantindo que não altera a classe
    void displayMessage() const;

private:
    // Declaração da variável membro que armazena o nome do curso
    std::string courseName;
};

#endif // GRADEBOOK_H
