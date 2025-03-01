#include <iostream>
using namespace std;

void add_one(int n) {
    // n is local variable which only exists within the function scope
    n++;
}

void add_one_ref(int * n) {
    // n is a pointer that points to a memory-address outside the function scope
    cout << "Accessing int * n arguement..." << endl;
    cout << "      n:   "<< n << endl;
    cout << "      &n:  " << &n << "  (&n is an address-of operator)"<< endl;
    cout << "      *n:  " << *n << "         (*n is a dereference operator)" << endl;
    
    (*n)++;
}

void print_function_arguments_as_reference_example() {
    cout << "int n = 0;" << endl;
    
    int n = 0;
    cout << "&n address is:" << &n << endl;


    add_one(n);
    cout << "   Non-reference -> add_one(n) output:  " << n << endl;
    n = 0;
    add_one_ref(&n);
    cout << "   Reference -> add_one_ref(&n) output: " << n << endl;
}

int main() {
    print_function_arguments_as_reference_example();


    return 0;
}