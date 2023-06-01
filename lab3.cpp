#include <iostream>
#include <iomanip>
using namespace std;

void sum();
void height_converter();
int fibonacci(int i);

int main()
{
    sum();
    cout << "****************************";
    height_converter();
    cout << "****************************";
    int fibo;
    cout << "\n\nFibonacci Series.";
    cout << "\n\nEnter the number of fibonacci numbers to generate: ";
    cin >> fibo;
    cout << "fibonacci series: ";
    for (int i = 0; i < fibo; ++i)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

//sum function
void sum()
{
    int number;
    int result = 0;
    cout << "\nThis program finds the sum of the first n natural numbers.\n";
    cout << "\nEnter the n number: ";
    cin >> number;
    for (int i = 1; i <= number; ++i)
    {
        result += i;
    }
    cout <<"Your answer is: " << result << "\n\n";
}

//height converter

void height_converter()
{
    double cm, ft;
    cout <<"\n\nThis is a height to feet converter.";
    cout << "\n\nEnter your height in centimeters: ";
    cin >> cm;
    ft = (cm /30.48);
    cout << "Your height in feet is: " << fixed << setprecision(3) << ft << "\n\n";
}

//fibonacci series
int fibonacci(int fibo)
{
    if (fibo <= 1)
    {
        return fibo;
    }
    return fibonacci(fibo - 1) + fibonacci(fibo - 2); 
}