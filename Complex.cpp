
#include "Complex.h"

namespace complexnumbers
{
ostream &operator<<(ostream &out, const Complex &c)
{
    out << "(" << c.getReal() << "," << c.getImaginary() << ")";
    return out;
}

Complex operator+(const Complex &c1, const Complex &c2)
{
    return Complex(c1.getReal()+c2.getReal(), c1.getImaginary()+c2.getImaginary());
}

Complex operator+(const Complex &c1, double d){
    return Complex(c1.getReal() + d, c1.getImaginary());
}

Complex operator+(double d,const Complex &c1){
    return Complex(c1.getReal() + d, c1.getImaginary());
}

Complex operator-(const Complex &c1, const Complex &c2)
{
    return Complex(c1.getReal()-c2.getReal(), c1.getImaginary()-c2.getImaginary());
}

Complex operator-(const Complex &c1, double d){
    return Complex(c1.getReal() - d, c1.getImaginary());
}

Complex operator-(double d,const Complex &c1){
    return Complex(c1.getReal() - d, c1.getImaginary());
}

Complex operator*(const Complex &c1, const Complex &c2){
    // (a + bi) . (c + di)
    // (ac - bd) + (ad + bc)i.
    return Complex(c1.getReal()*c2.getReal() - c1.getImaginary()*c2.getImaginary(), 
            c1.getReal()*c2.getImaginary() + c1.getImaginary() * c2.getReal());
}

Complex operator*(const Complex &c1, double d){
    return Complex(c1.getReal() * d, c1.getImaginary() * d);
}

Complex operator*(const double d, const Complex &c1){
    return Complex(c1.getReal() * d, c1.getImaginary() * d);
}

Complex operator/(const Complex &c1, const Complex &c2){
    Complex conj;
    conj = *c2;
    return c1*conj;
}

Complex operator/(const Complex &c1, double d){
    return Complex(c1.getReal() / d, c1.getImaginary() * d);
}

Complex operator/(const double d, const Complex &c1){
    return Complex(c1.getReal() / d, c1.getImaginary() * d);
}

/*************************************************************/

Complex::Complex() : real(0), imaginary(0)
{
}
Complex Complex::operator*() const{
    return Complex(real, -imaginary);
}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary)
{
}
Complex::Complex(const Complex &other)
{ // Copy operator
    real = other.real;
    imaginary = other.imaginary;
}

double Complex::getModulus(){
    return (sqrt(real*real + imaginary*imaginary));
}

double Complex::getPhase(){
    return atan(imaginary / real);
}

Complex Complex::convertToPolar(){
    return Complex(getModulus(), getPhase());
}
Complex Complex::convertToRect(){
    return Complex(real*cos(imaginary), real*sin(imaginary));
}

const Complex &Complex::operator=(const Complex &other)
{
    real = other.real;
    imaginary = other.imaginary;

    return *this;
}
 bool Complex::operator==(const Complex &other) const{
    return (real == other.real) && (imaginary == other.imaginary);
 }
 bool Complex::operator!=(const Complex &other) const{
     return !(*this==other);
 }
}