#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
private:
    string courseName;
    int aCount, bCount, cCount, dCount, fCount;

public:
    GradeBook(const string &name);
    void setCourseName(const string &name);
    string getCourseName() const;
    void displayMessage() const;
    void determineClassAverage() const;
    void inputGrades(); // Removido o 'const' aqui
    void displayGradeReport() const;
};

#endif // GRADEBOOK_H
