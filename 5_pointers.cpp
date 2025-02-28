#include <iostream> 
using namespace std; 
int main() 
{     
    int a = 5;  //Declare and initialize a variable
    /*  The following pointer declarations are all valid and they all are doing the same:
            Declaring a new pointer and initializing it with 0 (a non accessible memory address) for safety-reasons.
                int * b = 0;
                int* b = 0                 
                int *b = 0; // This is how its usually written.
                int *b; // <= this, however would cause "b" to point to some random address which might be unsafe.*/
    
    int *b = 0; // Create a new pointer of type int and initialize it with 0

    cout << "\"b\" is initialized to: " << b << " (memory address of: "<< &b << ")"<< endl << endl;

    //Now make the pointer "point" to the address of a
    b = &a; //"b" now points to the address of "a"

    cout << "\"a\" is stored at memory-address:  " << &a << endl;
    cout << "\"b\" is stored at memory-address:  " << &b << endl;
    cout << "\"b\" is pointing to memory-address now:  " << b << endl << endl;

    cout << "The value of \"a\" is: " << a << endl;  // returns the value of a

    //the "*b" will get the value from the address b points to (the value of a)
    cout << "The value of the area \"b\" is pointing to is: " << *b << endl << endl;

    //Now modify the value of the address "b" is pointing to...effectively changing the value of "a"     
    *b=10;

    cout << "\"a\" is still stored at memory-address:  " << &a << endl;
    cout << "\"b\" is still stored at memory-address:  " << &b << endl;
    cout << "\"b\" is still pointing to memory-address:  " << b << endl << endl;

    cout << "The value of \"a\" is now: " << a << endl;  // returns the value of a
    cout << "The value of the area \"b\" is pointing to is now: " << *b << endl << endl;

    /*  One of the biggest differences is that pointers in C++ are more secure.
    In C, we can assign a void pointer to a non-void pointer without using a cast to non-void pointer. 
    In C++, however, you have to explicitly type cast it.*/

    void* p1;
    char* p2;
    // p2 = p1; // Valid in C but not C++
    p2 = (char*) p1; // In C++ we have to typecast the pointer!

    return 0;        
}