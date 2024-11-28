#include <iostream>

using namespace std;
int main() {

//Loops in C++

//Using For loop in C++
/*Syntax of For loop:
for(initialisation; condition; updation) {
    code;
}
*/

for(int i=1; i<=100; i++) {
    cout<<i<<endl;
}

//Using While loop in C++
/*Syntax for While loop:
int i=any number;(initialization)
while(condition) {
    code;
}
*/

int j=1;
while(j<=100) {
    cout<<j<<endl;
    j++;

}

//Using do-while loop in C++
/*Syntax of do-while loop:
int i=any number; (initialisation)
do{
    code;
}while(condition);
*/

int k=1;
do {
    cout<<k<<endl;
    k++;
} while(k<=100);
   
   
//Infinite for loop, while loop, do-while loop also exist and are useful too in some cases 
//to create an infinite loop just place a condition in the loop which is always true.

//Challenge Problem
//Multiplication table of 6

int p=6;
for (int a=1; a<=10; a++) {
    cout<<"p x "<<a<<" = "<<p*a<<endl;
    }

 int b=1, q=7;
 while(b<=10) {
    cout<<"q x "<<b<<" = "<<q*b<<endl;
    b++;
 }
 
 int c=1, r=8;
 do {
    cout<<"r x "<<c<<" = "<<r*c<<endl;
    c++;
 } while(c<=10);
 
 
 
 return 0; 
}