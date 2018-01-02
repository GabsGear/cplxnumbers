#include <iostream>
#include "Complex.h"

using namespace std;
using namespace complexnumbers;

int main()
{
    Complex c1(2,3);
    Complex c2(3,5);

    if (c1 == c2){
        cout << "equal" << endl;
    }
    else{
        cout << "not equal" << endl;
    }
    return 0;
}
