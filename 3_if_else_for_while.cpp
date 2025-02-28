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

void while_loop_example() {
    int searched = 5;
    int given = -1;

    cout << "This is a simple guessing game:" << endl;
    

    while (searched != given) {
        cout << "Please enter a number: ";
        cin >> given;

        cout << "Thank you for your guess..." << endl;
    }

    cout << "You found the correct number! Goodbye!" << endl << endl;
}

void while_loop_continue_break() {
    cout << "Countdown from 10 to 0 (continue at 7 and break < 5)" << endl;
    
    int count = 10;  // The start value
    int destination = 0;  // the destination

    // This while will normally terminate when count reaches the destination-value
    while (count > destination) 
    {  
        if (count == 7) { // If count will turn into 7...
            cout << "skipped... ";
            count--;
            continue; //... the while-loop will skip to the next iteration due to the "continue"-statement.
        }

        if (count < 5) // If count falls below 5...
        {
            cout << "aborted... ";
            break; //... the while-loop will be aborted due to the "abort"-statement.
        }

        cout << count << " ";  //Note, that this will also execute when target is reached
    
        count--;
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
    while_loop_example();
    while_loop_continue_break();

    return 0;
}