#include <iostream>
using namespace std;

int main() {
    
//Arrays in C++
int marks[] = {98, 89, 95, 96, 94};

//We can change the value of an array
marks[2] = 97;

cout<<"value stored at marks[0] is "<<marks[0]<<endl;
cout<<"value stored at marks[1] is "<<marks[1]<<endl;
cout<<"value stored at marks[2] is "<<marks[2]<<endl;
cout<<"value stored at marks[3] is "<<marks[3]<<endl;
cout<<"value stored at marks[4] is "<<marks[4]<<endl;

int englishMarks[4];
englishMarks[0] = 85;
englishMarks[1] = 81;
englishMarks[2] = 82;
englishMarks[3] = 89;

cout<<"value stored at englishMarks[0] is "<<englishMarks[0]<<endl;
cout<<"value stored at englishMarks[1] is "<<englishMarks[1]<<endl;
cout<<"value stored at englishMarks[2] is "<<englishMarks[2]<<endl;
cout<<"value stored at englishMarks[3] is "<<englishMarks[3]<<endl;

for(int i=0; i<5; i++) {
    cout<<"Value stored at marks "<<i<<" is "<<marks[i]<<endl;
}

//Challenge problem
//To print array with the help of while and do-while loop.

int j=0;
while(j<4) {
    cout<<"Value stored at englishMarks "<<j<<" is "<< englishMarks[j]<<endl;
    j++;
}

int k=0;
do {
    cout<<"The value stored at marks "<<k<<" is "<<marks[k]<<endl;
    k++;
}while(k<5);

//Pointers and Arrays
int* p = marks;
cout<<"Address of marks[0] is "<<marks<<endl;
cout<<"Address of marks[0] is "<<p<<endl;



//Pointer Arithmetic formula
//new address = current address + i * (size of data type) 
//where i is {p+i) type
cout<<"Address of marks[1] is "<<p+4<<endl;

cout<<"the value of *p is "<<*(p)<<endl;
cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

int* q = englishMarks;
cout<<"*(q++) "<<*(q++)<<endl; //After printing the value of initial block cursor has went to the the next block i.e. englishMarks[1]
cout<<*(q)<<endl;//because the cursor is at englishMarks[1] therefore 81 got printed
 cout<<"*(++q) "<<*(++q);
 
 
 
    return 0;
}