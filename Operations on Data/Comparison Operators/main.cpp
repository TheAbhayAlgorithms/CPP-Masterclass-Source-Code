#include <iostream>
using namespace std;
int main() {

    auto num1{50};
    auto num2{45};

    cout << "num1 = " << num1 << " num2 = " << num2 << endl;


    cout<< boolalpha;
    cout << "num1 < num2= " << (num1<num2) << endl;
    cout << "num1 > num2= " << (num1>num2) << endl;
    cout << "num1 <= num2= " << (num1<=num2) << endl;
    cout << "num1 >= num2= " << (num1>=num2) << endl;
    cout << "num1 not equal to num2= " << (num1!= num2) << endl;
    cout << "num1 is equal to num2= " << (num1== num2) << endl;
}