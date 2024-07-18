#include <iostream>
#include "StudentManager.h"

void showMenu() {
    std::cout << "1. Add Student\n";
    std::cout << "2. Display All Students\n";
    std::cout << "3. Search Student by Name\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    StudentManager manager;
    int choice;

    do {
        showMenu();
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string id, name, major;
            int age;

            std::cout << "Enter ID: ";
            std::getline(std::cin, id);
            std::cout << "Enter Name: ";
            std::getline(std::cin, name);
            std::cout << "Enter Age: ";
            std::cin >> age;
            std::cin.ignore();
            std::cout << "Enter Major: ";
            std::getline(std::cin, major);

            Student student(id, name, age, major);
            manager.addStudent(student);
        } else if (choice == 2) {
            manager.displayAll();
        } else if (choice == 3) {
            std::string name;
            std::cout << "Enter Name to Search: ";
            std::getline(std::cin, name);
            manager.searchByName(name);
        }
    } while (choice != 4);

    return 0;
}
