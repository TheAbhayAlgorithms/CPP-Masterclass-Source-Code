// Variable : A named piece of memory that you use to store specific types of data

#include <iostream>
using namespace std;
int main() {


    // Braced Initialization
    int count1; // Variable may contain random garbage values. WARNING
    int count2{}; // Initializes to zero
    int count3{10}; // Initializes to 10
    int count4{15}; // Initializes to 15

    // Can use expression as initializers
    int addcount5{count3+count4};


    // int newNumber{doesn't exist + doesn't exist};  
    // Can cause a problem if the variable is not initialised i.e. 'doesn't exist'

    // int newNum{2.9} 
    // Doesn't compiles because of voilation of conversion of data type



    cout << "Count1: " << count1 << endl; // prints a garbage value that can be anything
    cout << "Count2: " << count2 << endl;
    cout << "Count3: " << count3 << endl;
    cout << "Count4: " << count4 << endl;
    cout << "AddCount5: " << addcount5 << endl;


    //Functional Initialization
    int count6;
    int count7();
    int count8(5);
    int count9(98);
    int count10(count8+count9);

    int count11(3.5);
    //Information gets lost, less safer than braced initialization (stores only integer part i.e. 3)
    // But compiles.

    cout << "Count6: " << count6 << endl; // prints a garbage value that can be anything
    // cout << "Count7: " << count7 << endl; // always evaluate as true (1)
    cout << "Count8: " << count8 << endl;
    cout << "Count9: " << count9 << endl;
    cout << "Count10: " << count10 << endl;
    cout << "Count11: " << count11 << endl;


    // And there is Assignment initialisation that usually everyone knows.



    // Check the sizeof

    cout << "Size of int: "<< sizeof(int)<< endl;
    cout << "Size of char: "<< sizeof(char)<< endl;
    cout << "Size of float: "<< sizeof(float)<< endl;
    cout << "Size of double: "<< sizeof(double)<< endl;
    cout << "Size of boolen: "<< sizeof(bool)<< endl;
    cout << "Size of string: "<< sizeof(string)<< endl; 
    // in micvc/windows its 32 bytes, in some it's 24 bytes like mac uses clang.
    cout << "Size of Count 11: " << sizeof(count11) << endl;

    return 0;
}