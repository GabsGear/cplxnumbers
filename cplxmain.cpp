#include <iostream>
#include "Complex.h"

using namespace std;
using namespace complexnumbers;

int main()
{
    Complex c1(2,3);
    Complex c2(3,5);

    Complex c3 = c1 + c2;

    cout << c1 + c2 +c3 << endl;

    Complex c4(4, 2);

    Complex c5 = c4 + 7;

    cout << c5 << endl;

    Complex c6(1, 7);

    cout << 3.5551 + c6 << endl;

    return 0;
}
