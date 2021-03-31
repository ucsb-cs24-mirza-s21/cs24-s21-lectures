#include <iostream>
using namespace std;

// Program is stored in code memory

int myGlobal = 33;    // In static memory

void MyFct() {
   int myLocal;       // On stack 
   myLocal = 999;
   cout << " " << myLocal;
   cout<<" Memory address of  myLocal: "
   <<&myLocal<<endl; // read & as
                     // "address of"
}

int main() {
   int myInt;            // On stack
   int* myPtr = nullptr; // On stack
   myInt = 555;
   cout<<" Value of myInt "<<myInt<<endl;
   cout<<" Memory address of  myInt: "<<&myInt<<endl;
   myPtr = &myInt;
   myInt = 0x5;

   
   MyFct();



/*
   myPtr = new int;      // In heap
   *myPtr = 222;
   cout << *myPtr << " " << myInt;
   delete myPtr; // Deallocated from heap

   MyFct(); // Stack grows, then shrinks
*/
   return 0;
}