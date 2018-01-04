
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
#include <math.h>  
using namespace std;

namespace complexnumbers
{

class Complex
{
  private:
    double real;
    double imaginary;

  public:
    Complex();
    Complex(double real, double imaginary);
    Complex(const Complex &other);

    double getReal() const { return real; }
    double getImaginary() const { return imaginary; }

    double getModulus();
    double getPhase();

    Complex convertToPolar();
    Complex convertToRect();

    const Complex &operator=(const Complex &other);
    bool operator==(const Complex &other) const;
    bool operator!=(const Complex &other) const;
    Complex operator*() const;

};

ostream &operator<<(ostream &out, const Complex &c);
Complex operator+(const Complex &c1, const Complex &c2);
Complex operator+(const Complex &c1, double d);
Complex operator+(double d,const Complex &c1);
Complex operator-(const Complex &c1, const Complex &c2);
Complex operator-(const Complex &c1, double d);
Complex operator-(double d,const Complex &c1);
Complex operator*(const Complex &c1, const Complex &c2);
Complex operator*(const Complex &c1, double d);
Complex operator*(const double d, const Complex &c1);
Complex operator/(const Complex &c1, const Complex &c2);
Complex operator/(const Complex &c1, double d);
Complex operator/(const double d, const Complex &c1);
}

#endif