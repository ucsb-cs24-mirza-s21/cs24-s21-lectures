// complex.cpp
// Review of classes and objects
// Create and initialize objects in C++
// Complex: (real) a + j*b (imaginary) , j = sqrt(-1)
// class to represent the complex datatype
#include <iostream>
using namespace std;
class complex
{
private:
    /* data */
    double real;
    double imag;

public:
    complex(double re = 0, double im = 0); // parametrized constructor
    // takes default values
    ~complex(); //destructor
    double getReal() const;
    double getImag() const;
    double getMagnitude() const;
    complex conjugate() const;

    void print() const;
    void setReal(double param);    
    void setImag(double param);

};
// :: scope operator, 

double complex::getReal() const{
    //real = 0;
    return real;
}
double complex::getImag() const{
    return imag;
}
void complex::setReal(double param){
    real = param;
} 

void complex::setImag(double param){
    imag = param;
}

void complex::print() const{
    if(imag>=0){
        cout<<real <<" + "<<imag<<"j"<<endl;
    }else{
        cout<<real <<" - "<<-imag<<"j"<<endl;
    }
        
}

complex::complex(double re, double im):real(re), imag(im) //initializer list
// initializer list must be used when member variables are constant
{
    //default is an empty function
    // called when the object is created
    /*
    cout<<" Hi! I just created and my value is "<<endl;
    print();
    real = re;
    imag = im;
    */
}

complex::~complex()
{
    // The destructor is called right before the object dies/goes away/
    // removed from memory!!
    // default is an empty function
    // called when the object is destroyed
    print(); 
    cout<<" Bye bye! "<<endl; 
}
double sumArray(int* a, int len){
    int result = 0;
    for (int i = 0; i < len; i++){
        result+=a[i]; // *(a+i)
        cout<<"Element "<<i<< " is "<< *(a+i)<<endl;
    }
    return result;
}



int main(int argc, char const *argv[])
{
    /* code */
    complex c1 {10, -20}; // C++11 notation
    complex c2 {10, 20}; //constructor called
    complex c3;
    complex* ptr; //declare
    ptr = &c3; //assign
    ptr->getImag(); // access member functions of c3 using ptr
    ptr = &c2;
    complex* p = &c3;
    int arr[3] {1, 2, 3};
    cout<<sumArray(arr, 3)<<endl; //pass the starting location of array
    // instead of copying over all the elements (more efficient)
    //c1.print();
    cout<<"In the middle"<<endl;
    double result = c1.getImag();
    result = 0;
    //c1.~complex();
    return 0;
}
