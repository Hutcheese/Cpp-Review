#include <iostream>
#include <stdio.h>
using namespace std;

// Declaring a structure called "person"
struct Person { 
    // Data elements in a structure are called "members" or "fields of structure"
    string name;
    int age;
    bool programs;
}; // Don't forget the semicolon to terminate the structure definition


void initialize_and_print_structs() {
    // Declaring person 
    Person struct1;
    Person struct2;

    //Setting person 1's values
    struct1.name = "alice";
    struct1.age = 20;
    struct1.programs = true;

    //Setting person 2's values
    struct2 = {"bob", 18, false};

    //Printing out
    cout << struct1.name << " (" << struct1.age << ")" << endl;
    cout << struct2.name << " (" << struct2.age << ")" << endl;   
}

struct Point {
    int x, y;
};

void initialize_and_print_array_of_structs() {
    struct Point arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = {i, i * 2};
        cout << arr[i].x << ", " << arr[i].y << endl;
    }
}

int main() {
    initialize_and_print_structs();
    initialize_and_print_array_of_structs();
    
    return 0;
}