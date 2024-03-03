#include <iostream>
#include <string>

int main () {

    std::cout << "Hello, please type your name" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}