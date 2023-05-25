#include <iostream>
#include <iomanip>
using namespace std;

void fahrenheit_to_celcius(float x);
void celcius_to_fahrenheit(float x);
int main()
{
    //Temperature Conversion Program
    float  choice, fahrenhiet_celcius, celcius_fahrenhiet;
    cout << "\tTHIS IS A TEMPERATURE - CONVERSION PROGRAM";
    cout << "\n1 - Fahrenheit to Celcius\n2 - Celcius to Fahrenheit\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter temperature in degrees Farenheit: ";
        cin >> fahrenhiet_celcius;
        fahrenheit_to_celcius(fahrenhiet_celcius);
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in degrees Celcius: ";
        cin >> celcius_fahrenhiet;
        celcius_to_fahrenheit(celcius_fahrenhiet);
    }
    return 0;
}

void fahrenheit_to_celcius(float x)
{
    
    float converted_fahrenheit = (x - 32) * 5/9;
    cout << "\nYour temperature in degrees Celcius is: " << fixed << setprecision(3) << converted_fahrenheit;// set decimal numbers to 3
}

void celcius_to_fahrenheit(float x)
{
    float converted_celcius = (x * 9/5) + 32;
    cout << "\nYour temperature in degrees Celcius is: " << fixed << setprecision(3) << converted_celcius;
}