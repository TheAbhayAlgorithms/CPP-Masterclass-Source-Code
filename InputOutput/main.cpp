#include <iostream>
using namespace std;

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

    //cout is used to send your data to the terminal, so as to print the output

    // Basically data is going from program to cout and then cout to terminal

    // cin : used to take data from the terminal
    // cout : used to print the data to the terminal (console)
    // cerr :
    // clog : 
    int mul = mulNumb(45,2);
    cout << "The multiplication of two numbers is: " << mul << endl;
    return 0;
}