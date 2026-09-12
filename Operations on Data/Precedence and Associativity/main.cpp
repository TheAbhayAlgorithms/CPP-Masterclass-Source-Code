#include<iostream>
using namespace std;
int main() {
    auto a{6};
    auto b{1};
    auto c{8};
    auto d{3};
    auto e{9};
    auto f{4};
    auto g{2};


    int result = a+b*c-d/e-f+g;

    cout << "result is: " << result<< endl;
}