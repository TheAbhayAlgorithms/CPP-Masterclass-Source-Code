#include <iostream>
#include <string>

int main() {
    // 1. Test Output
    std::cout << "========================================" << std::endl;
    std::cout << "✅ Success! Your C++ compiler is working." << std::endl;
    std::cout << "========================================" << std::endl;
    
    
    // 2. Test Terminal Input
    std::cout << "What is your name? ";
    std::string name;
    std::getline(std::cin, name);
    
    // 3. Test Final Logic
    std::cout << "\nHello, " << name << "! Your Mac C++ setup is 100% ready to go! 🎉" << std::endl;
    
    return 0;
}
