// Instanciando múltiplos objetos da classe GradeBook e utilizando
// o construtor GradeBook para especificar o nome do curso
// quando cada objeto GradeBook é criado.
#include <iostream>
#include "GradeBook.h"
using std::cout;
using std::endl;

#include <string> // o programa utiliza classe de string padrão C++
using std::string;

// A função main inicia a execução do programa
int main()
{
    // Cria dois objetos GradeBook
    GradeBook gradeBook1("CS101 Introduction ");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    // Exibe o valor inicial de courseName para cada GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         << endl;
    gradeBook1.determineClassAverage();
    gradeBook1.inputGrades();
    gradeBook1.displayGradeReport();
    return 0; // indica que o programa terminou com sucesso
} // fim da função main