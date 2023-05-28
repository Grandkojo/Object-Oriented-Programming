#include <iostream>
using namespace std;

int zeroSmaller(int &first, int &second);

int main()
{
    int first_number, second_number;
    cout << "Enter your first number: ";
    cin >> first_number;
    cout << "Second: ";
    cin >> second_number;
    zeroSmaller(first_number, second_number);
    cout <<" Updated first number: " << first_number << endl; 
    cout <<" Updated second number " << second_number << endl;
    return 0;
}

int zeroSmaller(int &first, int &second)
{
    int ref;
    if (first > second)
    {
        second = 0;
        ref = second;
    }
    else
    {
        first = 0;
        ref = first;
    }
    return ref;
}