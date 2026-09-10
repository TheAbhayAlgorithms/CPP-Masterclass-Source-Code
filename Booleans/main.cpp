#include <iostream>
using namespace std;
int main() {

    bool red_light{true};
    bool green_light(false);

    if (red_light) { // this statement runs if the value of the stored condition is true
        cout << "Stop!" << endl;
    }
    else { // this runs if condition is false
        cout << "Can Go!" << endl;
    }



    cout << "-----------------------------" << endl << endl <<endl;
    cout << "Size of(bool): " << sizeof(red_light) << endl;

    cout << "-----------------------------" << endl << endl <<endl;

    cout << "Value of red light variable is: " << red_light << endl;
    cout << "Value of green light variable is: " << green_light << endl;

    cout << "-----------------------------" << endl << endl <<endl;

    cout << boolalpha; // this is used to print the true/false value instead of 0 and 1

    cout << "Value of red light variable is: " << red_light << endl;
    cout << "Value of green light variable is: " << green_light << endl;
}