#include "Student.h"
#include <iostream>

Student::Student(std::string id, std::string name, int age, std::string major) 
    : id(id), name(name), age(age), major(major) {}

std::string Student::getId() const {
    return id;
}

std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

std::string Student::getMajor() const {
    return major;
}

void Student::display() const {
    std::cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Major: " << major << std::endl;
}
