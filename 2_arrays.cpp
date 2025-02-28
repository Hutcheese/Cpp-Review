#include <iostream>
using namespace std;

void method_one() {
    cout << "Method one: int marks[5]; marks[0] = 96; ..." << endl;
    
    int marks[5];
    marks[0] = 96;
    marks[1] = 92;
    marks[2] = 78;
    marks[3] = 54;
    marks[4] = 86;

    for (int i = 0; i < 5; i++) {
        cout << "  Marks of student " << i + 1 << " is: " << marks[i] << endl;
    }

    cout << endl;
}

void method_two() {
    cout<< "Method two: int marks[5] = {96, 92, 78, 54, 86}" << endl;
    
    int marks[5] = {96, 92, 78, 54, 86};

    for (int i = 0; i < 5; i++) {
        cout << "  Marks of student " << i + 1 << " is: " << marks[i] << endl;
    }

    // Following won't work as int i is a local variable and can't be used here
    // cout << "    Size of int marks[5] + int i: " << sizeof(marks) + sizeof(i) << " bytes\n";

    cout << endl;
}

void method_three() {
    cout << "Method three: int marks[] = {96, 92, 78, 54, 86}" << endl;
    cout << "int size = sizeof(marks) / sizeof(marks[0]);" << endl;
    
    int marks[] = {96, 92, 78, 54, 86};
    int size = sizeof(marks) / sizeof(marks[0]); // Calculate the size of the array
    
    for (int i = 0; i < size; i++) {
        cout << "  Marks of student " << i + 1 << " is: " << marks[i] << endl;
    }

    cout << "    Size of int marks[] + size: " << sizeof(marks) + sizeof(size) << " bytes\n";

    cout << endl;
}

int main() {
    method_one();
    method_two();
    method_three();

    return 0;
}
