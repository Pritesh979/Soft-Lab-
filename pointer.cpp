#include <iostream>
using namespace std;

int main() {
//What is a pointer? -----> derived Data type which holds the address of other data types.
int a=3;
int* b = &a;

//  "&" is (address of) operator which tells us the the address of the given variable.

cout<<"The address of a is "<<&a<<endl;
cout<<"The address of a is "<<b<<endl;

//  "*" is (value at) or dereference operator which tells us about the value stored in a given variable 
//or value stored at a particular address.

cout<<"The value at address b is "<<*b<<endl;

//pointer to pointer
int** c = &b;

cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;
cout<<"The value at address c is "<<*c<<endl;
cout<<"The value at address value_at(value_at (c)) is "<<**c<<endl;

    return 0;
}