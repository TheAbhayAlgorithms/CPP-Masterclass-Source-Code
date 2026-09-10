// Remember the suffixes when initialising floating point variables, otherwise it will take double as default
// Double works very well in many situations , so it is used a lot.


#include <iostream>
#include<iomanip> // used to set pricision
using namespace std;
int main() {

    // Declare and initialise the variables
    float number1{1.12345678901234567890f}; // (f at the last is the suffix for float) [precision 7 after that it starts printing the garbage value]
    double number2{1.12345678901234567890}; // By default it takes double [17 digits, after that garbage value]
    long double number3{1.12345678901234567890L}; // (L at the end is the suffix for Long double) [17 digits in mac, windows may differ, after that garbage value]


    //Print out the sizes
    cout << "size of float: " << sizeof(number1) << endl;
    cout << "size of double: " << sizeof(number2) << endl;
    cout << "size of long double: " <<sizeof(number3) << endl;


    // Precision 
    cout << setprecision(20);
    cout <<"number1 is: " << number1 << endl;
    cout <<"number2 is: " << number2 << endl;
    cout <<"number3 is: " << number3 << endl;



    cout <<"---------------------------------" << endl << endl << endl;
    double number5{123456789};
    double number6{1.23456789e8}; //(multiply with 10^8)
    double number7{1.234e8};

    
    
    double number8{0.00000000003498};
    double number9{3.498e-11}; //(multiply with 10^11)


    cout << "number 5 is : " << number5 << endl;
    cout << "number 6 is : " << number6 << endl;
    cout << "number 7 is : " << number7 << endl;
    cout << "number 8 is : " << number8 << endl;
    cout << "number 9 is : " << number9 << endl;


    cout <<"---------------------------------" << endl << endl <<endl;


    //Infinity and NaN

    double number10{5.6};
    double number101{-5.6};
    double number11{}; // Initialised to 0
    double number12{}; // Initialised to 0


    //Infinity
    double result {number10/number11};
    double result1 {number101/number11};

    cout << number10 << "/" << number11 << "gives" << result << endl;
    cout << number101 << "/" << number11 << "gives" << result1 << endl;
    cout << result << "/" << number10 << "gives" << result + number10 << endl;


    //NaN

    result = number11/number12;

    cout << number11 << "/" << number12 << "=" << result << endl;

    

}