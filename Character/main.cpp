#include<iostream>
using namespace std;
int main() {

    char character1{'a'};
    char character2{'b'};
    char character3{'h'};
    char character4{'a'};
    char character5{'y'};


    cout << character1 << endl;
    cout << character2 << endl;
    cout << character3 << endl;
    cout << character4 << endl;
    cout << character5 << endl;

    cout << "----------------------" << endl;

    
    // 1 byte (8bit) 2⁸ = 256-1 = 255 that means 0-255 different values 
    cout << "Size of(char): " << sizeof(character1)<< endl;


    cout << "----------------------" << endl;

    char value{65};
    cout << "Value: " << value << endl; // value is a variable and can be anything

    cout << "----------------------" << endl;


    // If we want to print the integer 65 instead of ascii character. Use static_cast

    cout << "Value(int): " << static_cast<int>(value) << endl;

    
    cout << "----------------------" << endl;


}