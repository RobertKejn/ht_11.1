
#include <iostream>
#include "Greeter.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Ваше имя: ";
    std::string s;
    std::getline(std::cin, s);
    Greeter greeter;
    std::cout << greeter.GreetString(s);
}
