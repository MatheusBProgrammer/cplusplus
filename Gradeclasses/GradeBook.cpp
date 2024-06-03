#include <iostream>    // Biblioteca de entrada e saída padrão do C++
#include "GradeBook.h" // Inclusão do cabeçalho da classe GradeBook
using namespace std;
using std::fixed;
#include <iomanip>       // manipuladores de fluxo parametrizados
using std::setprecision; // configura a precisão da saída numérica

// Construtor que inicializa o nome do curso
GradeBook::GradeBook(const std::string &name)
{
    setCourseName(name);
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}

// Define o nome do curso
void GradeBook::setCourseName(const std::string &name)
{
    if (name.length() <= 25)
    {
        courseName = name; // Atribui o valor passado para a variável membro courseName
    }
    else
    {
        courseName = name.substr(0, 25); // Inicia em 0 e tem comprimento de 25
        cout << "Name \"" << name << "\" exceeds maximum length(25).\n";
    }
}

// Obtém o nome do curso
std::string GradeBook::getCourseName() const
{
    return courseName;
}

// Exibe uma mensagem de boas-vindas
void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for " << getCourseName() << "!" << endl;
}

// Função que determina a média da classe
void GradeBook::determineClassAverage() const
{
    int total = 0;        // Soma de todas as notas inseridas
    int gradeCounter = 0; // Contador de quantas notas foram inseridas
    double average;       // Média das notas
    int grade;            // Nota inserida pelo usuário
    int aproveds = 0;

    while (true)
    {
        cout << "Enter a grade value(" << gradeCounter + 1 << ") or -1 to finish: ";
        cin >> grade;
        if (grade > 7)
        {
            aproveds += 1;
        }
        else if (grade == -1)
            break;

        total += grade;
        gradeCounter += 1;
    }

    if (gradeCounter != 0)
    {
        average = static_cast<double>(total) / gradeCounter;
        cout << "O valor das médias foi de: " << setprecision(2) << fixed << average << endl;
        cout << "O numero de alunos aprovados foi de: " << aproveds << endl;
        cout << "O numero de alunos reprovados foi de: " << (gradeCounter - aproveds) << endl;
    }
    else
    {
        cout << "Nenhum valor foi inserido!" << endl;
    }
}

// Função que insere notas e atualiza contadores
void GradeBook::inputGrades()
{
    int grade; // nota inserida pelo usuário

    cout << "Enter the letter grades." << endl
         << "Enter the EOF character to end input." << endl;

    // faz loop até usuário digitar a sequência de teclas de fim do arquivo
    while ((grade = cin.get()) != EOF)
    {
        // determina que nota foi inserida
        switch (grade)
        {             // instrução switch aninhada em while
        case 'A':     // a nota era letra A maiúscula
        case 'a':     // ou a minúscula
            aCount++; // incrementa aCount
            break;    // necessário para fechar switch

        case 'B':     // a nota era B maiúscula
        case 'b':     // ou b minúscula
            bCount++; // incrementa bCount
            break;    // fecha o switch

        case 'C':     // a nota era C maiúscula
        case 'c':     // ou c minúscula
            cCount++; // incrementa cCount
            break;    // fecha o switch

        case 'D':     // a nota era D maiúscula
        case 'd':     // ou d minúscula
            dCount++; // incrementa dCount
            break;    // fecha o switch

        case 'F':     // a nota era F maiúscula
        case 'f':     // ou f minúscula
            fCount++; // incrementa fCount
            break;    // fecha o switch

        case '\n': // ignora nova linha
        case '\t': // tabulações
        case ' ':  // e espaços em entrada
            break; // fecha o switch

        default: // captura todos os outros caracteres
            cout << "Incorrect letter grade entered."
                 << " Enter a new grade." << endl;
            break; // opcional; sairá de switch de qualquer jeito
        } // fim de switch
    } // fim do while
}

// Função que exibe o relatório de notas
void GradeBook::displayGradeReport() const
{
    cout << "\nNumber of students who received each letter grade:"
         << "\nA: " << aCount
         << "\nB: " << bCount
         << "\nC: " << cCount
         << "\nD: " << dCount
         << "\nF: " << fCount
         << endl;
}
