// Precedence: Which operation to do first
// Associativity: Which direction or which order


#include<iostream>
using namespace std;
int main() {
    int value{5};
    cout <<"Value after increment: " << value++ << endl;

    // Value first gets printed and then increased and stored in memory
    cout <<"Value after increment: " << ++value << endl;

    // Value first gets increased, stored in memory and then printed.

}