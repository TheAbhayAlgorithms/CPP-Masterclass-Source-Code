#include<iostream>
using namespace std;
int main() {

    int var1 {123};
    cout << "var1 value before assigning: " << var1 << endl;

    var1 = 55;
    cout << "var1 value after assigning: " << var1 << endl;

    cout <<"-----------------------------" << endl;


    bool var2{false};
    cout<<boolalpha;

    cout << "value of var2: " << var2 << endl;

    var2 = true;
    cout << "value of var2: " << var2 << endl;


    cout <<"-----------------------------" << endl;


    auto var3{333u}; // unsigned declaration
    var3 = -222; // Assign negative integer. DANGER!! 

    // will not give error, and compiled but it stores garbage value instead of -222


    cout <<"value of var3: " << var3;
}