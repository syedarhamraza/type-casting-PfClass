#include <iostream>
using namespace std;

int main() {
    float decimal = 4.25;
    cout << "The Decimal number is: " << decimal << endl;
    int integralpart = decimal;
    float fraction = decimal - integralpart;
    cout << integralpart << "\t" << fraction << endl;
    return 0;
}