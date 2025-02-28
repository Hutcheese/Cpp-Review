#include <iostream>
#include <string>

using namespace std;

int d = 4; // global variable

void global_local_variables() {
    int e = 5;
    int sum = d + e;
    cout << "The value of d (global) is: " << d << " (" << sizeof(d) << " bytes)" << endl;
    cout << "The value of e (local) is: " << e << " (" << sizeof(e) << " bytes)" << endl;
    cout << "The sum of d and e is: " << sum << endl << endl;
}

void std_string_example() {
    string sometext="This is a new text"; //Declaring a string

    cout << "Initial value of sometext is: " << sometext << endl;

    cout << "Enter a new text: ";
    getline(cin, sometext);  //Reading textinput from the keyboard

    cout << "You entered: " << sometext << endl;  //Writing the given text back to the console.
}

int main() {
    char hello_world[] = "Hello World!";
    string hello_earth = "Hello Earth!";
    cout << "char hello_world[] -> " << hello_world << " (" << sizeof(hello_world) << " bytes)" << endl;
    cout << "string hello_earth -> " << hello_earth << " ("<< sizeof(hello_earth) << " bytes)\n\n";

    char char_c = 'c';
    wchar_t wchar_c = L'c';
    cout << "char c = 'c' -> " << char_c << " (" << sizeof(char_c) << " bytes)" << endl;
    cout << "wchar_t wc = L'c' -> " << wchar_c << " (" << sizeof(wchar_c) << " bytes)" << endl << endl;
    
    bool is_true = 1;
    bool is_false = false;
    cout << "bool is_true = 1 -> " << is_true << " (" << sizeof(is_true) << " bytes)" << endl;
    cout << "bool is_false = false -> " << is_false << " (" << sizeof(is_false) << " bytes)" << "\n\n";

    int a = 3;
    float b = 4.4004;
    double c = 5.5005;
    double sum;
    string message = "The sum of a, b, and c is: ";
    sum = a + b + c;
    cout << "a is: " << a << " (" << sizeof(a) << " bytes)\n";
    cout << "b is: " << b << " (" << sizeof(b) << " bytes)" << "\n";
    cout << "c is: " << c << " (" << sizeof(c) << " bytes)" << endl;

    cout << message << sum << " (" << sizeof(sum) << " bytes)" << endl << endl;

    global_local_variables();
    std_string_example();

    return 0;
}