#include <iostream>
#include <cmath>
using namespace std;

int add(int a, int b) {
    return a + b;
}

template <typename T>
T add_t(T a, T b) {
    return a + b;
}

void print_add_template_example() {
    double a = 2.5;
    double b = 3.5;

    cout << "double a = 2.5; double b = 3.5;" << endl;
    cout << "  int add(int a, int b) -> add(a,b): " << add(a, b) << endl;
    cout << "  template <typename T> T add_t(T a, T b) -> add_t(a,b): "<< add_t(a, b) << endl;
    cout << endl;
}

int square(int a) {
    return a * a;
}

template <typename SQR>
SQR square_t(SQR a) {
    return a * a;
}

void print_square_template_example() {
    double a = 2.2;
    cout << "double a = 2.2;" << endl;
    cout << "  int square(int a) -> square(a): " << square(a) << endl;
    cout << "  template <typename SQR> SQR square_t(SQR a) -> square_t(a): "<< square_t(a) << endl;
    cout << endl;
}

template <typename T>
T to_the_power_of(T a, T b = 2) {
    // default of b is 2
    T result = pow(a, b);
    return result;
}

void print_to_the_power_of_template_example() {
    cout << "template <typename T> T to_the_power_of(T a, T b = 2) {...}" << endl;
    
    double a = 2.2;
    cout << "double a = 2.2;" << endl;
    cout << "  to_the_power_of(a): " << to_the_power_of(a) << endl;
    cout << "  to_the_power_of(a, 3.1): " << to_the_power_of(a, 3.1) << endl;
    cout << endl;
}

int main() {
    print_add_template_example();
    print_square_template_example();
    print_to_the_power_of_template_example();

    return 0;
}