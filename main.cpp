#include <iostream>
#include <string>
#include <windows.h>


int main() 
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::cout << "������� ���: ";
    std::cin >> name;
    std::cout << "������������, " << name << "!" << std::endl;
    return EXIT_SUCCESS;
}