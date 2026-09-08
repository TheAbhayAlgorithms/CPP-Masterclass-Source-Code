#include <iostream>
#include<string>
using namespace std;

int main() {
    // int age{21};
    // cout << "Age is: " << age << endl;
    // cerr <<"This is an error message" << endl;
    // clog <<"This is a Log Message" << endl;


    // int age;
    // string name;

    // cout << "Enter your name and age: " << endl;
    // cin >> name >> age;
    // cout << "Hello " << name << ". You're " << age << " years old" <<endl;

    // but here it doesn't work if you give space in your name eg. "Abhay Raj"


    int age;
    string full_name;

    cout << "Enter your name and age: " << endl;
    getline(cin,full_name);
    // getline allows to input names with spaces too.
    cin >> age;

    cout << "Hello " << full_name << ". You're " << age << " years old" <<endl;


}