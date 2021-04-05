//cstringtest.cpp

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string manu = "Lamborghini";
    const char* c_manu = manu.c_str();
    
    string new_manu(manu);
    manu[0] = 'P';

    cout<< c_manu<<endl;
    cout<< new_manu<<endl;
  
    return 0;
}
