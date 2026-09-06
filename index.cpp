#include <iostream>
// Short for Input/Output Stream. This is a standard header file that contains the foundational code for handling data streams (sequential flows of data entering or leaving your program).

// It makes things like cout and cin available to use.

using namespace std; 
// using namespace std; is a directive used to import all identifiers from the C++ Standard Library (std) namespace into the global scope, allowing you to use elements like cout, cin, string, and vector directly without typing the std:: prefix every time.
int main() {
    cout << "Number 1" << endl << endl;
    cout << "Number 2" << endl; // endl - to insert a new line (
    // Computer monitors are slow compared to the CPU. To save time, C++ stores text in a temporary holding area called a "buffer" and waits to print it all at once. endl forces the system to empty that buffer and display the text onto the screen instantly.)

    return 0;

    // return is a message send to the operating system that a program is executed successfully
}

// program runs in order from top to bottom and the program ends when it hits the curly bracket  '}' in the end.
