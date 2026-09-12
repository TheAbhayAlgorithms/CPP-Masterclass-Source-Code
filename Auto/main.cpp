#include<iostream>
using namespace std;

int main() {

    // Auto is used for assigning the type of variable according to the value stored in them
    
    auto var1{98};  // integer type
    auto var2{98.02}; // double defualt type
    auto var3{98.04f}; // float type
    auto var4{98.05L}; // Long type
    auto var6{'e'};  // char type
    auto var7{123u}; // unsigned double
    auto var8{1234ul}; // unsigned long type
    auto var9{12345ull}; // long long type
    

    cout << "Var 1 is: " << var1 << " and size of var1 is: " << sizeof(var1) << endl;
    cout << "Var 2 is: " << var2 << " and size of var2 is: " << sizeof(var2) << endl;
    cout << "Var 3 is: " << var3 << " and size of var3 is: " << sizeof(var3) << endl;
    cout << "Var 4 is: " << var4 << " and size of var4 is: " << sizeof(var4) << endl;
    cout << "Var 6 is: " << var6 << " and size of var6 is: " << sizeof(var6) << endl;
    cout << "Var 7 is: " << var7 << " and size of var7 is: " << sizeof(var7) << endl;
    cout << "Var 8 is: " << var8 << " and size of var8 is: " << sizeof(var8) << endl;
    cout << "Var 9 is: " << var9 << " and size of var9 is: " << sizeof(var9) << endl;
}