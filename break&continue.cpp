#include <iostream>
using namespace std;

int main() {

//Break and continue in loops
for(int i=1; i<=20; i++) {
    if(i==5){
        continue;
        }
    cout<<i<<endl;
    if(i==10){
        break;
    }
  }

int a=0;
while(a<=49) {
    a++;
    if(a==40){
        continue;
    }
    cout<<a<<endl;
}




    return 0;
}