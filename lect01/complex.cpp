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
    complex(/* args */); //constructor
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


complex::complex(/* args */)
{
}

complex::~complex()
{
}

int main(int argc, char const *argv[])
{
    /* code */
    complex c1;
    c1.print();
    double result = c1.getImag();
    result = 0;
    return 0;
}
