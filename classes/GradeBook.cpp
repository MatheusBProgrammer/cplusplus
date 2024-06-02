#include <iostream>    // Biblioteca de entrada e saída padrão do C++
#include "GradeBook.h" // Inclusão do cabeçalho da classe GradeBook

// Construtor que inicializa o nome do curso
// Construtores são funções especiais que são chamadas quando um objeto é criado
// O parâmetro 'const std::string &name' é uma referência constante a uma string
// 'const' indica que o valor não pode ser alterado dentro da função
// '&' indica que estamos passando uma referência, não uma cópia, economizando memória e tempo
GradeBook::GradeBook(const std::string &name)
{
    setCourseName(name); // Chama a função membro setCourseName para inicializar courseName
}

// Define o nome do curso
// A função 'setCourseName' recebe uma string constante por referência
void GradeBook::setCourseName(const std::string &name)
{
    courseName = name; // Atribui o valor passado para a variável membro courseName
}

// Obtém o nome do curso
// A função 'getCourseName' retorna uma string constante
// O 'const' após a função indica que ela não altera nenhum membro da classe
std::string GradeBook::getCourseName() const
{
    return courseName; // Retorna o valor da variável membro courseName
}

// Exibe uma mensagem de boas-vindas
// A função 'displayMessage' também é constante, garantindo que não altera a classe
void GradeBook::displayMessage() const
{
    // 'std::cout' é usado para saída de dados para o console
    // '<<' é o operador de inserção usado para enviar dados para a saída
    // 'getCourseName()' é chamado para obter o nome do curso
    // 'std::endl' é usado para adicionar uma nova linha ao final da mensagem
    std::cout << "Welcome to the grade book for " << getCourseName() << "!" << std::endl;
}
