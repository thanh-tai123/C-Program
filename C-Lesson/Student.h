#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string id;
    std::string name;
    int age;
    std::string major;

public:
    Student(std::string id, std::string name, int age, std::string major);
    
    std::string getId() const;
    std::string getName() const;
    int getAge() const;
    std::string getMajor() const;

    void display() const;
};

#endif // STUDENT_H
