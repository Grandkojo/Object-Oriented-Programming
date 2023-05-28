#include <iostream>
using namespace std;

float power(float base, int exponent);

int main(){
    // The power function 
    float number, index;
    cout << "The power function!\n";
    cout << "\nEnter the number you want to power followed by the index\n";
    cout << "\nNumber: ";
    cin >> number;
    cout << "\n\nIndex: ";
    cin >> index;
    float result = power(number, index);
    cout << number << " raised to the power of " << index <<" is " << result << endl;
    return 0;
}

float power(float base, int exponent)
{
    float result = 1.0;
    if (exponent >= 0)
    {
        for (int i = 0; i < exponent; ++i)
            result *= base;
    }
    else
    {
        for (int i = 0; i < -exponent; ++i)
            result /= base;
    }
    return result;
}
