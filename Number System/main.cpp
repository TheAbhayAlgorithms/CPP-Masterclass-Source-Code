// Digits and Data Range 

// 0~ 2ⁿ -1 is used to find Data Range in respective of digits.


/*  '0' is added at starting to represent as a Octal Number (017)
    '0x' is added at starting to represent as a Hexa Decimal Number (0x0F)
    '0b' is added at starting to represent as a Binary Number (0b00001111) */


#include <iostream>
using namespace std;

int main() {
    int number1 = 15; // this is a Decimal Number
    int number2 = 017; // this is an Octal Number
    int number3 = 0x0F; // this is a Hexa Decimal Number
    int number4 = 0b00001111; // this is a Binary


    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
    cout << "Number 3: " << number3 << endl;
    cout << "Number 4: " << number4 << endl;

    return 0;
}








/* All data is represented by a bunch of grouped cells of 0's and 1's in memory.
    Hexadecimal system makes it little easier to handle streams of data with 0's and 1's 
    Octal has also the same goal but it no longer used in modern times.  */