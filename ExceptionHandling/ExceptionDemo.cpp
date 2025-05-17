#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;

// Plays a sequence of song lyrics with a delay between each line
void playSong() {
    string audio[5] = {
        "I'm a bug-fixing, code-crashing programmer,",
        "Debugging my life, line by line, no glamour.",
        "Optimistic loops in my coffee-powered dreams,",
        "Errors can't stop me, I'm chasing my schemes.",
        "Tomorrow's compiler will make me a scientist, it seems!"
    };
    for (int i = 0; i < sizeof(audio) / sizeof(audio[0]); i++) {
        cout << "playing: " << audio[i] << endl;
        Sleep(5000);
    }
}

// Demonstrates handling array out of bound exception
void arrayOutOfBoundException() {
    int arr[2] = {30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index;

    cout << "Enter Index to display value:" << endl;
    cin >> index;
    try {
        if (index < 0 || index >= size) {
            throw out_of_range("Out of Bound");
        }
        cout << arr[index] << endl;
    } catch (const out_of_range& e) {
        cout << "Error Occurred: " << e.what() << endl << endl << endl << endl;
    }
}

// Demonstrates handling an arithmetic exception
void arithmaticException() {
    int result, numerator, denominator;
    cout << "Enter Numerator and Denominator: " << endl;
    cin >> numerator >> denominator;
    try {
        if (denominator == 0) {
            throw runtime_error("Division by Zero");
        }
        result = numerator / denominator;
        cout << "Division Result: " << result << endl << endl;
    } catch (runtime_error& error) {
        cout << "Error Occurred: " << error.what() << endl << endl << endl << endl;
        // Optionally, notify the developer or log the error here
        // e.g: sendEmailToDeveloper(error.what());
    }
}

// Demonstrates handling a null pointer exception
void nullPointerException() {
    int* ptr = nullptr;
    cout << "Demonstrating Null Pointer Exception Handling..." << endl;
    try {
        if (ptr == nullptr) {
            throw runtime_error("Null pointer dereference attempted");
        }
        cout << "Value pointed by ptr: " << *ptr << endl;
    } catch (runtime_error& error) {
        cout << "Error Occurred: " << error.what() << endl << endl << endl << endl;
    }
}

int main() {

    // Each function below handles its own exceptions internally.
    // This ensures that if an exception occurs in one function,
    // it will not terminate the program or prevent the subsequent
    // functions from executing. The program continues to run smoothly.

    arrayOutOfBoundException();   // Handles array out-of-bounds errors
    arithmaticException();        // Handles division by zero errors
    nullPointerException();       // Handles null pointer dereferences
    playSong();                   // Plays the song regardless of previous exceptions

    return 0;
}