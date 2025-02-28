#include <iostream>
using namespace std;

void if_else_example() {
    int age[] = {16,48,72,66,23};
    
    for(int i = 0; i < 5; i++)
    {
        
        if(age[i] < 20)
        {
            cout << "Child" << " ";
        }
        else if( age[i] >= 20 && age[i] < 60)
        {
            cout << "Adult" << " ";
        }
        else
        {
            cout << "Retired" << " ";
        }
    }

    cout << endl << endl;
}

void for_each_loop_read_only() {
    cout << "for_each_loop_read_only (int array[] = {1,2,3,4,5})" << endl;
    
    int array[] = {1,2,3,4,5};
    for(const int& n: array) // This loop creates a constant reference to each element in the array and assigns it to the variable n
    {
        // n = 0; // This line would cause a compilation error because n is a reference to a const int
        cout << n << " ";
    }
    cout << endl << endl;
}

void for_each_loop_write_into() {
    cout << "for_each_loop_write_into (int array_name[] = {1,2,3,4,5})" << endl;
    
    int array_name[] = {1,2,3,4,5};
    
    for(int& n : array_name) // This loop creates a reference to each element in the array and assigns it to the variable n
    {
        n = 0; // Any modifications made to n will affect the original array
        cout << n << " ";
    }

    cout << " : Normal for loop iteration check -> ";

    for (int i = 0; i < 5; i++) {
        cout << array_name[i] << " "; // This will print the original values of the array
    }

    cout << endl << endl;
}

void for_each_loop_copy_method() {
    cout << "for_each_loop_copy_method (int array_name[] = {1,2,3,4,5})" << endl;

    int array_name[] = {1,2,3,4,5};

    for(int n : array_name) // This loop creates a copy of each element in the array and assigns it to the variable n
    {
        n = 0; // Any modifications made to n will not affect the original array
        cout << n << " ";
    }

    cout << " : Normal for loop iteration check -> ";

    for (int i = 0; i < 5; i++) {
        cout << array_name[i] << " "; // This will print the original values of the array
    }

    cout << endl << endl;
}

void for_loop() {
    cout << "for_loop (int array[] = {1,2,3,4,5})" << endl;
    
    int array[] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++) // 
    {
        cout << array[i] << " ";
    }

    cout << endl << endl;
}

int main()
{
    if_else_example();
    for_each_loop_read_only();
    for_each_loop_write_into();
    for_each_loop_copy_method();
    for_loop();

    return 0;
}