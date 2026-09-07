#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    string message = "Hello! Welcome to the machine. 👋";
    
    // Iterate through each character in the string
    for (char c : message) {
        cout << c << flush;
        
        // Pause for 100 milliseconds between characters to simulate typing
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    
    // Simulate a blinking text cursor at the end
    for (int i = 0; i < 3; ++i) {
        cout << "_" << flush;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << "\b \b" << flush; // Erases the cursor
        this_thread::sleep_for(chrono::milliseconds(400));
    }

    cout << endl;
    return 0;
}
