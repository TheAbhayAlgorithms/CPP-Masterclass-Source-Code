/* 1. A statement is a basic unit of computation in C++ program
2. Every c++ program is a collection of statements organised in a certain way to achieve some goal.
3. Statements must end with a semicolon in C++ (;)

4. statements are executed in order from top to bottom
Execution keeps on going until there is a statement that causes theh program to terminate.

*/


#include <iostream>
using namespace std;

// FUNCTIONS
// A function must be defined before its use (reusable block of code)
int addNumb(int firstNum, int secNum) {
    int sum = firstNum + secNum;
    return sum;
}

int mulNumb(int firstNum, int secNum) {
    int mul = firstNum*secNum;
    return mul;
}

int main() {
    int sum = addNumb(56,89);
    cout << "The sum of two numbers is: " << sum << endl;
    int mul = mulNumb(45,2);
    cout << "The multiplication of two numbers is: " << mul << endl;
    return 0;
}