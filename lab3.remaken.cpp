# include <iostream>
#include <iomanip>
using namespace std;

//sum function
void sum(int n)
{
    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        result += i;
    }
    cout  << "The sum of " << n << " numbers is "<< result;
}


double height_converter(double height);
int fibonacci(int fibo);

int main()
{
    ///sum
    int  num;
    cout << "\n\nFinding the sum of n numbers.";
    cout << "\nEnter n: ";
    cin >> num;
    sum(num);

    //height to feet converter
    double cm, ft;
    cout << "\n\nThis is a height converter";
    cout <<"\n\nEnter your height in cm: ";
    cin >> cm;
    ft = height_converter(cm);
    cout << "\nYour height in feet is: " << fixed << setprecision(3) <<ft;

    //fibonacci series
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


//height converter
double height_converter(double n)
{
    double ft;
    ft = (n / 30.48);
    return ft;
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

/*int sum_n(int n)
{
    int f_term, s_term, n_term = 0;
    for (int i = 2; i < n; i++)
    {
        f_term = s_term;
        s_term = n_term;
        n_term = f_term + s_term;
    }
}*/