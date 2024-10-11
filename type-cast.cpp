#include <iostream>
using namespace std;

int main() {
    float decimal = 4.25;
    int integeralPart = static_cast<int>(decimal);
    float decimalPart = decimal - integeralPart;

    cout << integeralPart << "\t" << decimalPart << endl;

}