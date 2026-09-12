#include <iostream>
using namespace std;
int main() {
    
    auto value{45};
    cout <<"The value is: " << value<< endl;
    value+=5;
    cout <<"The value is(value+=5): " << value<< endl;

    value-=3;
    cout <<"The value is(value-=5): " << value<< endl;

    value*=3;
    cout <<"The value is(value*=3): " << value<< endl;

    value/= 10;
    cout <<"The value is(value/=5): " << value<< endl;

    value%= 3;
    cout <<"The value is(value%=3): " << value<< endl;
}