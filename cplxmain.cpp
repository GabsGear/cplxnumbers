#include <iostream>
#include "Complex.h"

using namespace std;
using namespace complexnumbers;

int main()
{
    Complex c1(2,3);
    Complex c2(3,5);

    cout << c2 - c1 << endl;
    //cout << *c1 + Complex(4, 3)<< endl;
    

    return 0;
}
