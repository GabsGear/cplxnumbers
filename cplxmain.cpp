#include <iostream>
#include "Complex.h"

using namespace std;
using namespace complexnumbers;

int main()
{
    Complex c1(2,3);
    Complex c2 = c1;

    cout << c2 << endl;

    return 0;
}
