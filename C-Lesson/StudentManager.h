#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include "Student.h"
#include <vector>

class StudentManager {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student);
    void displayAll() const;
    void searchByName(const std::string& name) const;
};

#endif // STUDENTMANAGER_H
