#include <iostream>
using namespace std;

int main() {
    // Basic Variable
    int num = 10;
    
    // Pointer declaration & initialization
    // Stores the memory address of 'num'
    int* ptr = &num;

    cout << "==========================================" << endl;
    cout << "       C++ POINTERS BASIC DEMO            " << endl;
    cout << "==========================================" << endl;

    // 1. Displaying value and memory address
    cout << "Value of num: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;
    cout << "Value stored in ptr (Address of num): " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    cout << "------------------------------------------" << endl;

    // 2. Modifying value using Pointer (Dereferencing)
    *ptr = 25; // Directly changes the value of 'num'
    cout << "After modifying value using pointer (*ptr = 25):" << endl;
    cout << "New value of num: " << num << endl;
    cout << "New value via *ptr: " << *ptr << endl;

    cout << "==========================================" << endl;

    return 0;
}