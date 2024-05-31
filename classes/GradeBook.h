#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

class GradeBook
{
public:
    GradeBook(const std::string &name);
    void setCourseName(const std::string &name);
    std::string getCourseName() const;
    void displayMessage() const;

private:
    std::string courseName;
};

#endif // GRADEBOOK_H
