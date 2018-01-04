#include <iostream>
#include "Complex.h"

using namespace std;
using namespace complexnumbers;

int main()
{
    Complex c1(2,-3);
    Complex c2(2,6);

    cout << c1.getModulus() << endl;
    //cout << *c1 + Complex(4, 3)<< endl;
    cout << c1.getPhase();

    return 0;

}
