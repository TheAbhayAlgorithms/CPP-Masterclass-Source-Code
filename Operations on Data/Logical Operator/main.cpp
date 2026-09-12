#include<iostream>
using namespace std;
int main() {
    bool a{true};
    bool b{false};
    bool c{true};

    cout << boolalpha;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;


    // AND : Evaluates to true when all operands are true.
    // A single false operand will drag the entire expression to evaluating false


    cout << "Basic AND Operations" << endl;

    cout << "a&&b: " << (a&&b) << endl;
    cout << "a&&c: " << (a&&c) << endl;
    cout << "a&&b&&c: " << (a&&b&&c) << endl;
}