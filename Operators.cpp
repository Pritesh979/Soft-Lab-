#include<iostream>

using namespace std;

int main() {
   int a = 30, b = 10;
   cout<<"Using Arithmetic Operators {+ - * / %} Binary Operators"<<endl;
   cout<<"The answer of a+b is "<<a+b<<endl;
   cout<<"The answer of a-b is "<<a-b<<endl;
   cout<<"The answer of a*b is "<<a*b<<endl;
   cout<<"The answer of a/b is "<<a/b<<endl;
   cout<<"The answer of a%b is "<<a%b<<endl;

   cout<<"Using Unary Operators {++a a++ --b b--}"<<endl;
   cout<<"a++ is equal to "<<a++<<endl;
   cout<<"++a is equal to "<<++a<<endl;
   cout<<"--b is equal to "<<--b<<endl;
   cout<<"b-- is equal to "<<b--<<endl;

   cout<<"Using Assignment Operators {= += -= *= /= %=}"<<endl;
   cout<<"The answer of a+=3 is "<<(a+=3)<<endl;
   cout<<"The answer of b-=3 is "<<(b-=3)<<endl;
   cout<<"The answer of a*=10 is "<<(a*=10)<<endl;
   cout<<"The answer of b/=5 is "<<(b/=5)<<endl;
   cout<<"The answer of a%=7 is "<<(a%=7)<<endl;

   cout<<"Using comparison Operators {== != >= <= > <}"<<endl;
   cout<<"the condition (a is equals to b) a==b is "<<(a==b)<<endl;
   cout<<"the condition (a not equals to b) a!=b is "<<(a!=b)<<endl;
   cout<<"the condition (a is greater than or equal to b) a>=b is "<<(a>=b)<<endl;
   cout<<"the condition (a is less than or equal to b) a<=b is "<<(a<=b)<<endl;
   cout<<"the condition (a is greater than b) a>b is "<<(a>b)<<endl;
   cout<<"the condition (a is less than b) a<b is "<<(a<b)<<endl;

   int c=20, d=30;
   cout<<"Using logical Operators {&& || !}"<<endl;
   cout<<"the condition (c==d && c<=d) is "<<(c==d && c<=d)<<endl;
   cout<<"the condition (c==d || c<=d) is "<<(c==d || c<=d)<<endl;
   cout<<"the condition !(c==d || c<=d) is "<<!(c==d || c<=d)<<endl;



  
   
    return 0;
}




