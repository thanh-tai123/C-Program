#include "StudentManager.h"
#include <iostream>

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
}

void StudentManager::displayAll() const {
    for (const auto& student : students) {
        student.display();
    }
}

void StudentManager::searchByName(const std::string& name) const {
    for (const auto& student : students) {
        if (student.getName().find(name) != std::string::npos) {
            student.display();
        }
    }
}
