#include <iostream>
#include "GradeBook.h"

// Construtor que inicializa o nome do curso
GradeBook::GradeBook(const std::string &name)
{
    setCourseName(name);
}

// Define o nome do curso
void GradeBook::setCourseName(const std::string &name)
{
    courseName = name;
}

// Obtém o nome do curso
std::string GradeBook::getCourseName() const
{
    return courseName;
}

// Exibe uma mensagem de boas-vindas
void GradeBook::displayMessage() const
{
    std::cout << "Welcome to the grade book for " << getCourseName() << "!" << std::endl;
}
