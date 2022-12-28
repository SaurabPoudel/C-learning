#include <iostream>
using namespace std;

int main(){
    // Address of operator
    int a = 3;
    int * b = &a;
    cout << "The address of a is "<<b<<endl;
    cout << "The address of a is "<<&a<<endl;
    // Derefrence operator
    cout << "The value at address b is "<<*b<<endl;
    // Pointer to pointer
    int** c = &b;
    cout << "The address of b is "<<&b<<endl;
    cout << "The address of b is "<<c<<endl;

}